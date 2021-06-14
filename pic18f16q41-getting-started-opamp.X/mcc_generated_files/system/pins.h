/**
  Generated Pins header File

  Company:
    Microchip Technology Inc.

  File Name:
    pins.h

  Summary:
    This is generated driver header for pins. 

  Description:
    This header file provides APIs for all pins selected in the GUI.

  Generation Information:
    Driver Version:  3.0.0

*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PINS_H
#define PINS_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RA1 aliases
#define LED_D5_TRIS                 TRISAbits.TRISA1
#define LED_D5_LAT                  LATAbits.LATA1
#define LED_D5_PORT                 PORTAbits.RA1
#define LED_D5_WPU                  WPUAbits.WPUA1
#define LED_D5_OD                   ODCONAbits.ODCA1
#define LED_D5_ANS                  ANSELAbits.ANSELA1
#define LED_D5_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define LED_D5_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define LED_D5_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define LED_D5_GetValue()           PORTAbits.RA1
#define LED_D5_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define LED_D5_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define LED_D5_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define LED_D5_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define LED_D5_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define LED_D5_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define LED_D5_SetAnalogMode()      do { ANSELAbits.ANSELA1 = 1; } while(0)
#define LED_D5_SetDigitalMode()     do { ANSELAbits.ANSELA1 = 0; } while(0)

// get/set RA2 aliases
#define OPAMP_IN_TRIS                 TRISAbits.TRISA2
#define OPAMP_IN_LAT                  LATAbits.LATA2
#define OPAMP_IN_PORT                 PORTAbits.RA2
#define OPAMP_IN_WPU                  WPUAbits.WPUA2
#define OPAMP_IN_OD                   ODCONAbits.ODCA2
#define OPAMP_IN_ANS                  ANSELAbits.ANSELA2
#define OPAMP_IN_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define OPAMP_IN_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define OPAMP_IN_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define OPAMP_IN_GetValue()           PORTAbits.RA2
#define OPAMP_IN_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define OPAMP_IN_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define OPAMP_IN_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define OPAMP_IN_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define OPAMP_IN_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define OPAMP_IN_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define OPAMP_IN_SetAnalogMode()      do { ANSELAbits.ANSELA2 = 1; } while(0)
#define OPAMP_IN_SetDigitalMode()     do { ANSELAbits.ANSELA2 = 0; } while(0)

// get/set RA5 aliases
#define LED_D4_TRIS                 TRISAbits.TRISA5
#define LED_D4_LAT                  LATAbits.LATA5
#define LED_D4_PORT                 PORTAbits.RA5
#define LED_D4_WPU                  WPUAbits.WPUA5
#define LED_D4_OD                   ODCONAbits.ODCA5
#define LED_D4_ANS                  ANSELAbits.ANSELA5
#define LED_D4_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define LED_D4_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define LED_D4_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define LED_D4_GetValue()           PORTAbits.RA5
#define LED_D4_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define LED_D4_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define LED_D4_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define LED_D4_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define LED_D4_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define LED_D4_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define LED_D4_SetAnalogMode()      do { ANSELAbits.ANSELA5 = 1; } while(0)
#define LED_D4_SetDigitalMode()     do { ANSELAbits.ANSELA5 = 0; } while(0)

// get/set RB4 aliases
#define EXT_CONFIG_IN_MIN_TRIS                 TRISBbits.TRISB4
#define EXT_CONFIG_IN_MIN_LAT                  LATBbits.LATB4
#define EXT_CONFIG_IN_MIN_PORT                 PORTBbits.RB4
#define EXT_CONFIG_IN_MIN_WPU                  WPUBbits.WPUB4
#define EXT_CONFIG_IN_MIN_OD                   ODCONBbits.ODCB4
#define EXT_CONFIG_IN_MIN_ANS                  ANSELBbits.ANSELB4
#define EXT_CONFIG_IN_MIN_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define EXT_CONFIG_IN_MIN_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define EXT_CONFIG_IN_MIN_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define EXT_CONFIG_IN_MIN_GetValue()           PORTBbits.RB4
#define EXT_CONFIG_IN_MIN_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define EXT_CONFIG_IN_MIN_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define EXT_CONFIG_IN_MIN_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define EXT_CONFIG_IN_MIN_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define EXT_CONFIG_IN_MIN_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define EXT_CONFIG_IN_MIN_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define EXT_CONFIG_IN_MIN_SetAnalogMode()      do { ANSELBbits.ANSELB4 = 1; } while(0)
#define EXT_CONFIG_IN_MIN_SetDigitalMode()     do { ANSELBbits.ANSELB4 = 0; } while(0)

// get/set RB5 aliases
#define EXT_CONFIG_IN_PLUS_TRIS                 TRISBbits.TRISB5
#define EXT_CONFIG_IN_PLUS_LAT                  LATBbits.LATB5
#define EXT_CONFIG_IN_PLUS_PORT                 PORTBbits.RB5
#define EXT_CONFIG_IN_PLUS_WPU                  WPUBbits.WPUB5
#define EXT_CONFIG_IN_PLUS_OD                   ODCONBbits.ODCB5
#define EXT_CONFIG_IN_PLUS_ANS                  ANSELBbits.ANSELB5
#define EXT_CONFIG_IN_PLUS_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define EXT_CONFIG_IN_PLUS_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define EXT_CONFIG_IN_PLUS_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define EXT_CONFIG_IN_PLUS_GetValue()           PORTBbits.RB5
#define EXT_CONFIG_IN_PLUS_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define EXT_CONFIG_IN_PLUS_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define EXT_CONFIG_IN_PLUS_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define EXT_CONFIG_IN_PLUS_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define EXT_CONFIG_IN_PLUS_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define EXT_CONFIG_IN_PLUS_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define EXT_CONFIG_IN_PLUS_SetAnalogMode()      do { ANSELBbits.ANSELB5 = 1; } while(0)
#define EXT_CONFIG_IN_PLUS_SetDigitalMode()     do { ANSELBbits.ANSELB5 = 0; } while(0)

// get/set RC2 aliases
#define OPAMP_OUT_TRIS                 TRISCbits.TRISC2
#define OPAMP_OUT_LAT                  LATCbits.LATC2
#define OPAMP_OUT_PORT                 PORTCbits.RC2
#define OPAMP_OUT_WPU                  WPUCbits.WPUC2
#define OPAMP_OUT_OD                   ODCONCbits.ODCC2
#define OPAMP_OUT_ANS                  ANSELCbits.ANSELC2
#define OPAMP_OUT_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define OPAMP_OUT_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define OPAMP_OUT_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define OPAMP_OUT_GetValue()           PORTCbits.RC2
#define OPAMP_OUT_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define OPAMP_OUT_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define OPAMP_OUT_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define OPAMP_OUT_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define OPAMP_OUT_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define OPAMP_OUT_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define OPAMP_OUT_SetAnalogMode()      do { ANSELCbits.ANSELC2 = 1; } while(0)
#define OPAMP_OUT_SetDigitalMode()     do { ANSELCbits.ANSELC2 = 0; } while(0)

// get/set RC4 aliases
#define SW1_LPC_TRIS                 TRISCbits.TRISC4
#define SW1_LPC_LAT                  LATCbits.LATC4
#define SW1_LPC_PORT                 PORTCbits.RC4
#define SW1_LPC_WPU                  WPUCbits.WPUC4
#define SW1_LPC_OD                   ODCONCbits.ODCC4
#define SW1_LPC_ANS                  ANSELCbits.ANSELC4
#define SW1_LPC_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define SW1_LPC_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define SW1_LPC_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define SW1_LPC_GetValue()           PORTCbits.RC4
#define SW1_LPC_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define SW1_LPC_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define SW1_LPC_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define SW1_LPC_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define SW1_LPC_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define SW1_LPC_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define SW1_LPC_SetAnalogMode()      do { ANSELCbits.ANSELC4 = 1; } while(0)
#define SW1_LPC_SetDigitalMode()     do { ANSELCbits.ANSELC4 = 0; } while(0)

// get/set RC5 aliases
#define LED_D7_TRIS                 TRISCbits.TRISC5
#define LED_D7_LAT                  LATCbits.LATC5
#define LED_D7_PORT                 PORTCbits.RC5
#define LED_D7_WPU                  WPUCbits.WPUC5
#define LED_D7_OD                   ODCONCbits.ODCC5
#define LED_D7_ANS                  ANSELCbits.ANSELC5
#define LED_D7_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define LED_D7_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define LED_D7_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define LED_D7_GetValue()           PORTCbits.RC5
#define LED_D7_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define LED_D7_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define LED_D7_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define LED_D7_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define LED_D7_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define LED_D7_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define LED_D7_SetAnalogMode()      do { ANSELCbits.ANSELC5 = 1; } while(0)
#define LED_D7_SetDigitalMode()     do { ANSELCbits.ANSELC5 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PINS_H
/**
 End of File
*/