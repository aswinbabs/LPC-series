//*****************************************************************************
//
// usbhandler.c - General USB handling routines.
//
// Copyright (c) 2007-2008 Luminary Micro, Inc.  All rights reserved.
// 
// Software License Agreement
// 
// Luminary Micro, Inc. (LMI) is supplying this software for use solely and
// exclusively on LMI's microcontroller products.
// 
// The software is owned by LMI and/or its suppliers, and is protected under
// applicable copyright laws.  All rights are reserved.  You may not combine
// this software with "viral" open-source software in order to form a larger
// program.  Any use in violation of the foregoing restrictions may subject
// the user to criminal sanctions under applicable laws, as well as to civil
// liability for the breach of the terms and conditions of this license.
// 
// THIS SOFTWARE IS PROVIDED "AS IS".  NO WARRANTIES, WHETHER EXPRESS, IMPLIED
// OR STATUTORY, INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF
// MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE.
// LMI SHALL NOT, IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR
// CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER.
// 
// This is part of revision 2523 of the Stellaris USB Library.
//
//*****************************************************************************

#include "hw_types.h"
#include "hw_memmap.h"
#include "sysctl.h"
#include "usb.h"
#include "interrupt.h"
#include "usblib.h"
#include "usbdevice.h"
#include "usblibpriv.h"

//*****************************************************************************
//
//! \addtogroup device_api
//! @{
//
//*****************************************************************************

//*****************************************************************************
//
//! The USB device interrupt handler.
//!
//! This the main USB interrupt handler entry point for use in USB device
//! applications.  This top-level handler will branch the interrupt off to the
//! appropriate application or stack handlers depending on the current status
//! of the USB controller.
//!
//! Applications which operate purely as USB devices (rather than dual mode
//! applications which can operate in either device or host mode at different
//! times) must ensure that a pointer to this function is installed in the
//! interrupt vector table entry for the USB0 interrupt.  For dual mode
//! operation, the vector should be set to point to \e USB0DualModeIntHandler()
//! instead.
//!
//! \return None.
//
//*****************************************************************************
void
USB0DeviceIntHandler(void)
{
    unsigned long ulStatus;

    //
    // Get the current full USB interrupt status.
    //
    ulStatus = USBIntStatus(USB0_BASE);

    //
    // Call the internal handler.
    //
    USBDeviceIntHandlerInternal(ulStatus);
}

//*****************************************************************************
//
// The internal USB device interrupt handler.
//
// \param ulStatus is the current interrupt status as read via a call to
// USBIntStatus().
//
// This function is called from either \e USB0DualModeIntHandler() or
// \e USB0DeviceIntHandler() to process USB interrupts when in device mode.
// This handler will branch the interrupt off to the appropriate application or
// stack handlers depending on the current status of the USB controller.
//
// The two-tiered structure for the interrupt handler ensures that it is
// possible to use the same handler code in both device and OTG modes and
// means that host code can be excluded from applications that only require
// support for USB device mode operation.
//
// \return None.
//
//*****************************************************************************
void
USBDeviceIntHandlerInternal(unsigned long ulStatus)
{
    //
    // Received a reset from the host.
    //
    if(ulStatus & USB_INT_RESET)
    {
        USBDeviceEnumResetHandler();
    }

    //
    // Suspend was signaled on the bus.
    //
    if(ulStatus & USB_INT_SUSPEND)
    {
        //
        // Call the SuspendHandler() if it was specified.
        //
        if(g_psUSBDeviceInfo->sCallbacks.pfnSuspendHandler)
        {
            g_psUSBDeviceInfo->sCallbacks.pfnSuspendHandler(0);
        }
    }

    //
    // Resume was signaled on the bus.
    //
    if(ulStatus & USB_INT_RESUME)
    {
        //
        // Call the ResumeHandler() if it was specified.
        //
        if(g_psUSBDeviceInfo->sCallbacks.pfnResumeHandler)
        {
            g_psUSBDeviceInfo->sCallbacks.pfnResumeHandler(0);
        }
    }

    //
    // USB device was disconnected.
    //
    if(ulStatus & USB_INT_DISCONNECT)
    {
        //
        // Call the DisconnectHandler() if it was specified.
        //
        if(g_psUSBDeviceInfo->sCallbacks.pfnDisconnectHandler)
        {
            g_psUSBDeviceInfo->sCallbacks.pfnDisconnectHandler(0);
        }
    }

    //
    // Handle end point 0 interrupts.
    //
    if(ulStatus & USB_INT_EP0)
    {
        USBDeviceEnumHandler();
    }

    //
    // If this is any other endpoint then check for the callback and call it
    // if it is available.
    //
    if(ulStatus & (USB_INT_DEV_IN | USB_INT_DEV_OUT))
    {
        if(g_psUSBDeviceInfo->sCallbacks.pfnEndpointHandler)
        {
            g_psUSBDeviceInfo->sCallbacks.pfnEndpointHandler(0,
                ulStatus & (USB_INT_DEV_IN | USB_INT_DEV_OUT));
        }
    }
}

//*****************************************************************************
//
// Close the Doxygen group.
//! @}
//
//*****************************************************************************
