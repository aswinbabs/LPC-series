/******************************************************************************/
/*  This file is part of the ARM Toolchain package                            */
/*  Copyright KEIL ELEKTRONIK GmbH 2003 - 2009                                */
/******************************************************************************/
/*                                                                            */
/*  FlashDev.C:  Device Description for ATSAM3 Flashes                        */
/*                                                                            */
/******************************************************************************/

#include "..\FlashOS.H"        // FlashOS Structures


#ifdef SIZE_64k
struct FlashDevice const FlashDevice  =  {
   FLASH_DRV_VERS,             // Driver Version, do not modify!
   "ATSAM3 64kB Flash",        // Device Name
   ONCHIP,                     // Device Type
   0x00080000,                 // Device Start Address
   0x00010000,                 // Device Size in Bytes (64kB)
   256,                        // Programming Page Size
   0,                          // Reserved, must be 0
   0xFF,                       // Initial Content of Erased Memory
   100,                        // Program Page Timeout 100 mSec
   1000,                       // Erase Sector Timeout 1000 mSec

// Specify Size and Address of Sectors
   0x0100, 0x000000,           // Sector Size 256B (256 Sectors)
   SECTOR_END
};
#endif

#ifdef SIZE_128k
struct FlashDevice const FlashDevice  =  {
   FLASH_DRV_VERS,             // Driver Version, do not modify!
   "ATSAM3 128kB Flash",       // Device Name
   ONCHIP,                     // Device Type
   0x00080000,                 // Device Start Address
   0x00020000,                 // Device Size in Bytes (128kB)
   256,                        // Programming Page Size
   0,                          // Reserved, must be 0
   0xFF,                       // Initial Content of Erased Memory
   100,                        // Program Page Timeout 100 mSec
   1000,                       // Erase Sector Timeout 1000 mSec

// Specify Size and Address of Sectors
   0x0100, 0x000000,           // Sector Size 256B (512 Sectors)
   SECTOR_END
};
#endif

#ifdef SIZE_128k_B1
struct FlashDevice const FlashDevice  =  {
   FLASH_DRV_VERS,             // Driver Version, do not modify!
   "ATSAM3 128kB Bank 1 Flash",// Device Name
   ONCHIP,                     // Device Type
   0x00100000,                 // Device Start Address
   0x00020000,                 // Device Size in Bytes (128kB)
   256,                        // Programming Page Size
   0,                          // Reserved, must be 0
   0xFF,                       // Initial Content of Erased Memory
   100,                        // Program Page Timeout 100 mSec
   1000,                       // Erase Sector Timeout 1000 mSec

// Specify Size and Address of Sectors
   0x0100, 0x000000,           // Sector Size 256B (512 Sectors)
   SECTOR_END
};
#endif
