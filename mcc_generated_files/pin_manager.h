/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.80.0
        Device            :  PIC16F1825
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.10 and above
        MPLAB 	          :  MPLAB X 5.30	
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

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

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

// get/set ledRojo aliases
#define ledRojo_TRIS                 TRISAbits.TRISA2
#define ledRojo_LAT                  LATAbits.LATA2
#define ledRojo_PORT                 PORTAbits.RA2
#define ledRojo_WPU                  WPUAbits.WPUA2
#define ledRojo_ANS                  ANSELAbits.ANSA2
#define ledRojo_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define ledRojo_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define ledRojo_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define ledRojo_GetValue()           PORTAbits.RA2
#define ledRojo_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define ledRojo_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define ledRojo_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define ledRojo_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define ledRojo_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define ledRojo_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set mpxhOut aliases
#define mpxhOut_TRIS                 TRISAbits.TRISA4
#define mpxhOut_LAT                  LATAbits.LATA4
#define mpxhOut_PORT                 PORTAbits.RA4
#define mpxhOut_WPU                  WPUAbits.WPUA4
#define mpxhOut_ANS                  ANSELAbits.ANSA4
#define mpxhOut_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define mpxhOut_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define mpxhOut_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define mpxhOut_GetValue()           PORTAbits.RA4
#define mpxhOut_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define mpxhOut_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define mpxhOut_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define mpxhOut_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define mpxhOut_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define mpxhOut_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set mpxhIn aliases
#define mpxhIn_TRIS                 TRISAbits.TRISA5
#define mpxhIn_LAT                  LATAbits.LATA5
#define mpxhIn_PORT                 PORTAbits.RA5
#define mpxhIn_WPU                  WPUAbits.WPUA5
#define mpxhIn_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define mpxhIn_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define mpxhIn_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define mpxhIn_GetValue()           PORTAbits.RA5
#define mpxhIn_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define mpxhIn_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define mpxhIn_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define mpxhIn_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)

// get/set ledAzul aliases
#define ledAzul_TRIS                 TRISCbits.TRISC2
#define ledAzul_LAT                  LATCbits.LATC2
#define ledAzul_PORT                 PORTCbits.RC2
#define ledAzul_WPU                  WPUCbits.WPUC2
#define ledAzul_ANS                  ANSELCbits.ANSC2
#define ledAzul_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define ledAzul_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define ledAzul_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define ledAzul_GetValue()           PORTCbits.RC2
#define ledAzul_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define ledAzul_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define ledAzul_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define ledAzul_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define ledAzul_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define ledAzul_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set ledVerde aliases
#define ledVerde_TRIS                 TRISCbits.TRISC3
#define ledVerde_LAT                  LATCbits.LATC3
#define ledVerde_PORT                 PORTCbits.RC3
#define ledVerde_WPU                  WPUCbits.WPUC3
#define ledVerde_ANS                  ANSELCbits.ANSC3
#define ledVerde_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define ledVerde_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define ledVerde_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define ledVerde_GetValue()           PORTCbits.RC3
#define ledVerde_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define ledVerde_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define ledVerde_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define ledVerde_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define ledVerde_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define ledVerde_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set irLed aliases
#define irLed_TRIS                 TRISCbits.TRISC4
#define irLed_LAT                  LATCbits.LATC4
#define irLed_PORT                 PORTCbits.RC4
#define irLed_WPU                  WPUCbits.WPUC4
#define irLed_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define irLed_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define irLed_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define irLed_GetValue()           PORTCbits.RC4
#define irLed_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define irLed_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define irLed_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define irLed_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)

// get/set dutyPal aliases
#define dutyPal_TRIS                 TRISCbits.TRISC5
#define dutyPal_LAT                  LATCbits.LATC5
#define dutyPal_PORT                 PORTCbits.RC5
#define dutyPal_WPU                  WPUCbits.WPUC5
#define dutyPal_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define dutyPal_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define dutyPal_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define dutyPal_GetValue()           PORTCbits.RC5
#define dutyPal_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define dutyPal_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define dutyPal_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define dutyPal_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)

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



#endif // PIN_MANAGER_H
/**
 End of File
*/