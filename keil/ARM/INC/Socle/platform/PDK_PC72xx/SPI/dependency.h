#include <platform.h>
#include <irqs.h>

#ifndef SOCLE_APB0_SPI0
#ifdef SOCLE_APB0_SPI
#define SOCLE_APB0_SPI0 SOCLE_APB0_SPI
#else
#error "SPI IP base is not defined"
#endif
#endif

#ifndef SOCLE_APB0_SPI1
#define SOCLE_APB0_SPI1 SOCLE_APB0_SPI0
#define SOCLE_SPI_IP_1_TEST 0
#else
#define SOCLE_SPI_IP_1_TEST 1
#endif

#ifndef SOCLE_INTC_SPI0
#ifdef SOCLE_INTC_SPI
#define SOCLE_INTC_SPI0 SOCLE_INTC_SPI
#else
#error "SPI IRQ is not defined"
#endif
#endif

#ifndef SOCLE_INTC_SPI1
#define SOCLE_INTC_SPI1 SOCLE_INTC_SPI0
#endif

//20080201 jsho modify, for menu control
#ifdef CONFIG_PANTHER7_HDMA
#if defined(CONFIG_CDK) || defined(CONFIG_PC9002) || defined(CONFIG_SCDK)
#define SOCLE_SPI_HWDMA_PANTHER7_HDMA_TEST 0
#else
#define SOCLE_SPI_HWDMA_PANTHER7_HDMA_TEST 1
#endif
#else
#define SOCLE_SPI_HWDMA_PANTHER7_HDMA_TEST 0
#endif

//20080201 jsho modify, for menu control
#if defined(CONFIG_CDK) || defined(CONFIG_PDK) || defined(CONFIG_SCDK)
#define SOCLE_SPI_EEPROM_0_TEST 1 
#define SOCLE_SPI_EEPROM_1_TEST 0
#define SOCLE_SPI_MARVEL_WIFI_0_TEST 0
#define SOCLE_SPI_MARVEL_WIFI_1_TEST 0
#define SOCLE_SPI_TSC2000_0_TEST 0
#define SOCLE_SPI_TSC2000_1_TEST 1
#elif defined(CONFIG_PC9002) || defined(CONFIG_PC9220)
#define SOCLE_SPI_EEPROM_0_TEST 0 
#define SOCLE_SPI_EEPROM_1_TEST 0
#define SOCLE_SPI_MARVEL_WIFI_0_TEST 1
#define SOCLE_SPI_MARVEL_WIFI_1_TEST 0
#define SOCLE_SPI_TSC2000_0_TEST 0
#define SOCLE_SPI_TSC2000_1_TEST 1
#elif defined(CONFIG_PC7210)
#define SOCLE_SPI_EEPROM_0_TEST 0
#define SOCLE_SPI_EEPROM_1_TEST 0
#define SOCLE_SPI_MARVEL_WIFI_0_TEST 1
#define SOCLE_SPI_MARVEL_WIFI_1_TEST 0
#define SOCLE_SPI_TSC2000_0_TEST 1
#define SOCLE_SPI_TSC2000_1_TEST 0
#else
#define SOCLE_SPI_EEPROM_0_TEST 1 
#define SOCLE_SPI_EEPROM_1_TEST 0
#define SOCLE_SPI_MARVEL_WIFI_0_TEST 0
#define SOCLE_SPI_MARVEL_WIFI_1_TEST 0
#define SOCLE_SPI_TSC2000_0_TEST 0
#define SOCLE_SPI_TSC2000_1_TEST 0
#endif

#ifdef CONFIG_PC9220
#define SPI_SLAVE_TEST 1
#else
#define SPI_SLAVE_TEST 0
#endif
