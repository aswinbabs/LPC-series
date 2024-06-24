#ifndef _regs_MEMCTRL_H_
#define _regs_MEMCTRL_H_

static UINT	BANK_ADDRESS[SOCLE_MEMORY_BANKS] = {	SOCLE_MM_DDR_SDR_BANK0,
											#ifdef	SOCLE_MM_DDR_SDR_BANK1
												SOCLE_MM_DDR_SDR_BANK1,
											#endif
											#ifdef	SOCLE_MM_DDR_SDR_BANK2
												SOCLE_MM_DDR_SDR_BANK2,
											#endif
											#ifdef	SOCLE_MM_DDR_SDR_BANK3
												SOCLE_MM_DDR_SDR_BANK3,
											#endif
											#ifdef	SOCLE_MM_DDR_SDR_BANK4
												SOCLE_MM_DDR_SDR_BANK4,
											#endif
											#ifdef	SOCLE_MM_DDR_SDR_BANK5
												SOCLE_MM_DDR_SDR_BANK5,
											#endif
											#ifdef	SOCLE_MM_DDR_SDR_BANK6
												SOCLE_MM_DDR_SDR_BANK6,
											#endif
											#ifdef	SOCLE_MM_DDR_SDR_BANK7
												SOCLE_MM_DDR_SDR_BANK7,
											#endif						
										};
										
#define SOCLE_AHB0_DDRMC_SD_BASIC		(addr_t) (SOCLE_AHB0_DDRMC + 0x000C)
#define SOCLE_AHB0_DDRMC_AHBS1CR		(addr_t) (SOCLE_AHB0_DDRMC + 0x0050)
#define SOCLE_AHB0_DDRMC_AHBS2CR		(addr_t) (SOCLE_AHB0_DDRMC + 0x0054)
#define SOCLE_AHB0_DDRMC_AHBS3CR		(addr_t) (SOCLE_AHB0_DDRMC + 0x0058)
#define SOCLE_AHB0_DDRMC_AHBS4CR		(addr_t) (SOCLE_AHB0_DDRMC + 0x005C)

#define AHBSnCR_PRIORITY_S	0
#define AHBSnCR_RESPONSE_S	3

#define AHBSnCR_PRIORITY_M	(7<<AHBSnCR_PRIORITY_S)
#define AHBSnCR_RESPONSE_M	(1<<AHBSnCR_RESPONSE_S)

#define AHBS1CR_SET_PRIORITY(val)	writew(((readw(SOCLE_AHB0_DDRMC_AHBS1CR) & (~AHBSnCR_PRIORITY_M)) | (val << AHBSnCR_PRIORITY_S)),SOCLE_AHB0_DDRMC_AHBS1CR)
#define AHBS2CR_SET_PRIORITY(val)	writew(((readw(SOCLE_AHB0_DDRMC_AHBS2CR) & (~AHBSnCR_PRIORITY_M)) | (val << AHBSnCR_PRIORITY_S)),SOCLE_AHB0_DDRMC_AHBS2CR)
#define AHBS3CR_SET_PRIORITY(val)	writew(((readw(SOCLE_AHB0_DDRMC_AHBS3CR) & (~AHBSnCR_PRIORITY_M)) | (val << AHBSnCR_PRIORITY_S)),SOCLE_AHB0_DDRMC_AHBS3CR)
#define AHBS4CR_SET_PRIORITY(val)	writew(((readw(SOCLE_AHB0_DDRMC_AHBS4CR) & (~AHBSnCR_PRIORITY_M)) | (val << AHBSnCR_PRIORITY_S)),SOCLE_AHB0_DDRMC_AHBS4CR)
#define AHBS1CR_SET_RESPONSE(val)	writew(((readw(SOCLE_AHB0_DDRMC_AHBS1CR) & (~AHBSnCR_RESPONSE_M)) | (val << AHBSnCR_RESPONSE_S)),SOCLE_AHB0_DDRMC_AHBS1CR)
#define AHBS2CR_SET_RESPONSE(val)	writew(((readw(SOCLE_AHB0_DDRMC_AHBS2CR) & (~AHBSnCR_RESPONSE_M)) | (val << AHBSnCR_RESPONSE_S)),SOCLE_AHB0_DDRMC_AHBS2CR)
#define AHBS3CR_SET_RESPONSE(val)	writew(((readw(SOCLE_AHB0_DDRMC_AHBS3CR) & (~AHBSnCR_RESPONSE_M)) | (val << AHBSnCR_RESPONSE_S)),SOCLE_AHB0_DDRMC_AHBS3CR)
#define AHBS4CR_SET_RESPONSE(val)	writew(((readw(SOCLE_AHB0_DDRMC_AHBS4CR) & (~AHBSnCR_RESPONSE_M)) | (val << AHBSnCR_RESPONSE_S)),SOCLE_AHB0_DDRMC_AHBS4CR)

#define AHBS1CR_clear		writew(0,SOCLE_AHB0_DDRMC_AHBS1CR)
#define AHBS2CR_clear		writew(0,SOCLE_AHB0_DDRMC_AHBS2CR)
#define AHBS3CR_clear		writew(0,SOCLE_AHB0_DDRMC_AHBS3CR)
#define AHBS4CR_clear		writew(0,SOCLE_AHB0_DDRMC_AHBS4CR)
			
#define SD_BASIC_ARBITER_S	4
#define SD_BASIC_ARBITER_M	(1<<SD_BASIC_ARBITER_S)
#define FIX		1
#define RR		0

#define SD_BASIC_ARBITER(val)	writew(((readw(SOCLE_AHB0_DDRMC_SD_BASIC) & (~SD_BASIC_ARBITER_M)) | \
											(val << SD_BASIC_ARBITER_S)),SOCLE_AHB0_DDRMC_SD_BASIC)

#endif //_regs_MEMCTRL_H_
