/***********************************************************************/
/*  This file is part of the ARM Toolchain package                     */
/*  Copyright KEIL ELEKTRONIK GmbH 2003 - 2007                         */
/***********************************************************************/
/*                                                                     */
/*  FlashDev.C:  Device Description for ST M29DW640F (16-bit Bus)      */
/*                                                                     */
/***********************************************************************/

#include "..\FlashOS.H"        // FlashOS Structures


struct FlashDevice const FlashDevice  =  {
   FLASH_DRV_VERS,             // Driver Version, do not modify!
   "M29DW640F Flash",          // Device Name 
   EXT16BIT,                   // Device Type
   0x000000,                   // Device Start Address
   0x800000,                   // Device Size in Bytes (8MB)
   1024,                       // Programming Page Size
   0,                          // Reserved, must be 0
   0xFF,                       // Initial Content of Erased Memory
   100,                        // Program Page Timeout 100 mSec
   3000,                       // Erase Sector Timeout 3000 mSec

// Specify Size and Address of Sectors
   0x02000, 0x000000,          // Sector Size  8kB (  8 Sectors)
   0x10000, 0x010000,          // Sector Size 64kB (126 Sectors)
   0x02000, 0x7F0000,          // Sector Size  8kB (  8 Sectors)
   SECTOR_END

};
