/*
Copyright (c) [2012-2020] Microchip Technology Inc.  

    All rights reserved.

    You are permitted to use the accompanying software and its derivatives 
    with Microchip products. See the Microchip license agreement accompanying 
    this software, if any, for additional info regarding your rights and 
    obligations.

    MICROCHIP SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT 
    WARRANTY OF ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT 
    LIMITATION, ANY WARRANTY OF MERCHANTABILITY, TITLE, NON-INFRINGEMENT 
    AND FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT WILL MICROCHIP OR ITS
    LICENSORS BE LIABLE OR OBLIGATED UNDER CONTRACT, NEGLIGENCE, STRICT 
    LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR OTHER LEGAL EQUITABLE 
    THEORY FOR ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES INCLUDING BUT NOT 
    LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES, 
    OR OTHER SIMILAR COSTS. 

    To the fullest extend allowed by law, Microchip and its licensors 
    liability will not exceed the amount of fees, if any, that you paid 
    directly to Microchip to use this software. 

    THIRD PARTY SOFTWARE:  Notwithstanding anything to the contrary, any 
    third party software accompanying this software is subject to the terms 
    and conditions of the third party's license agreement.  To the extent 
    required by third party licenses covering such third party software, 
    the terms of such license will apply in lieu of the terms provided in 
    this notice or applicable license.  To the extent the terms of such 
    third party licenses prohibit any of the restrictions described here, 
    such restrictions will not apply to such third party software.
*/
#include "mcc_generated_files/system/system.h"

#include "OPAsetup.h"
#include "debounce.h"

/*
 * OPA Module I/O
 * OPA1OUT = RC2
 * In+ = RA2 (Non-Inverting, Unity Gain)
 * In- = RA2 (Inverting)
 * 
 * External only:
 * In+ = RB5 (Custom)
 * In- = RB4 (Custom)
 */

//Detect a timer overflow
#define TMR2_HasOverflowOccured() PIR3bits.TMR2IF
#define TMR2_ClearOverflowFlag() PIR3bits.TMR2IF = 0b0

int main(void)
{
    // Initialize the device
    SYSTEM_Initialize();
    
    //Setup the OPAMP
    setupOPA(UNITY_GAIN);
    
    // Initialize the Debounce Machine
    initDebounce();
    
    // Start TMR2
    Timer2_Start();
        
    uint8_t count = 0;
    while (1)
    {
        // Occurs every 1ms
        if (TMR2_HasOverflowOccured())
        {
            TMR2_ClearOverflowFlag();
            // Increment Timer Counter for LEDs
            count++;
                        
            // Update the key state (invert to prevent premature switching)
            updateKeyState(0, !SW1_LPC_GetValue());
            
            // Run debouncing
            debounce();
        }
        
        // Change the LED
        if (count == 250)
        {
            LED_D7_Toggle();
            count = 0;
        }
    }
    return 0;
}
/**
 End of File
*/