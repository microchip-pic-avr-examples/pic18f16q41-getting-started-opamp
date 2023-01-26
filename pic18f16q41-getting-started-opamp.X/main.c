/*
 * MAIN Generated Driver File
 * 
 * @file main.c
 * 
 * @defgroup main MAIN
 * 
 * @brief This is the generated driver implementation file for the MAIN driver.
 *
 * @version MAIN Driver Version 1.0.0
*/

/*
© [2023] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
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