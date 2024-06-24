#include <lpc213x.h>

// Delay function
void delay1() {
    int i, j;
    for (i = 0; i < 200; i++) {
        for (j = 0; j < 200; j++);
    }
}

// Send command to display
void command(char a) {
    IOCLR0 = 0x000003FF;              // Clear all
    IOSET0 = a << 2;

    IOSET0 = 0x00000002;              // RS=0 & E=1
    delay1();
    IOCLR0 = 0x00000002;
}

// Send data to display
void data(char a) {
    IOCLR0 = 0x000003FF;              // Clear all
    IOSET0 = a << 2;

    IOSET0 = 0x00000003;              // RS=1 & E=1
    delay1();
    IOCLR0 = 0x00000002;              // RS=1 & E=0
}

// Display a string on the LCD
void display(const char *str) {
    while (*str != '\0') {
        data(*str);
        str++;
    }
}

// Initialize the display
void init_display() {
    command(0x01);
    command(0x06);
    command(0x38);
    command(0x0F);
    command(0x80);
}

// Simple delay
void delay() {
    int i;
    for (i = 0; i <= 1000000; i++);
}

// Interrupt flag to indicate ISR occurrence
volatile int interrupt_flag = 0;

// Interrupt Service Routine (ISR)
void isr() __irq {
    // Set interrupt flag
    interrupt_flag = 1;

    // Toggle debug LED (P1.16) to indicate ISR execution
    IO1PIN ^= (1 << 16); // Toggle P1.16

    // Clear EINT0 interrupt flag
    EXTINT = (1 << 0);

    // Acknowledge the interrupt in the VIC
    VICVectAddr = 0;
}

int main() {
    // IO and Pin Initialization
    IO0CLR = ~0;
    PINSEL0 = 0;                      // GPIO
    PINSEL1 = (1 << 0);               // Enable EINT0
    IO0DIR = ~0;
    IO1DIR = ~0;

    // Set P1.16 as output for debug LED
    IO1DIR |= (1 << 16); // Set P1.16 as output

    // Initialize Display
    init_display();

    // External Interrupt Configuration
    EXTINT = 0x01;                    // Clear EINT0 flag
    EXTMODE = 0x01;                   // EINT0 edge sensitive
    EXTPOLAR = 0x00;                  // EINT0 falling edge sensitive (pull-down switch)
    VICIntEnClr = 1 << 14;            // Clear any pending interrupt
    VICIntSelect = 0;                 // Assigned to IRQ category
    VICVectCntl0 = (1 << 5) | 14;     // Use slot 0 and enable it
    VICVectAddr0 = (unsigned int)isr; // Address of the ISR
    VICIntEnable = 1 << 14;           // Enable EINT0 interrupt

    // Enable global interrupts
    __enable_irq();

    // Main Loop
    while (1) {
        // Check if interrupt occurred
        if (interrupt_flag) {
            // Reset interrupt flag
            interrupt_flag = 0;

            // Update display to indicate interrupt
            command(0x01);                    // Clear display
            command(0x80);                    // Set cursor to beginning
            display("INTERRUPT ON");

            // Simple delay for display update visibility
            delay();
        } else {
            // Regular display update
            command(0x80);
            display("Ideal Condition");

            // Toggle IO1 pins
            IO1PIN = ~IO1PIN;
            delay();
        }
    }

    return 0; // Although this will never be reached, it's good practice to include it
}
