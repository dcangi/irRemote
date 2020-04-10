/* 
 * File:   project.h
 * Author: dcangi
 *
 * Created on 7 de abril de 2020, 14:33
 */

#ifndef PROJECT_H
#define	PROJECT_H

#include "mcc_generated_files/mcc.h"



//---------------------------------------------------------------------------------------//
#define         TMR0_USEG250                0
#define         TMR0_MSEG1                  1
#define         TMR0_MSEG4                  2
#define         TMR0_SEG1                   3
#define         TMR0_MIN1                   4
#define         TMR0_HORA1                  5
#define         TMR0_USEG25                 6
#define         TMR0_USEG50                 7
//---------------------------------------------------------------------------------------//
#define         SEGUNDOS                    250
//---------------------------------------------------------------------------------------//

/********************************************************/
/******************  Manejo de bit  *********************/
/********************************************************/
#define bit_test(var, bit) ((var) & (1 <<(bit)))
#define bit_set(var, bit) ((var) |= (1 << (bit)))
#define bit_clear(var, bit) ((var) &= ~(1 << (bit)))
#define nibble_swap(var) (( var >> 4 ) | ( var << 4 ))
#define input(port, bit) ((port &  (1 << bit))? 1 : 0)
#define output_high(port, bit) bit_set(port, bit)
#define output_low(port, bit) bit_clear(port, bit)
#define output_toggle(port, bit) (input(port, bit)? bit_clear(port, bit) : bit_set(port,bit))
/********************************************************/

/********************************************************/
/******************  Definitions  ***********************/ 
/********************************************************/
#define         u8                          uint8_t
#define         i8                          int8_t
#define         u16                         uint16_t
#define         i16                         int16_t
#define         u32                         uint32_t
#define         i32                         int32_t
/********************************************************/

typedef union {
   uint8_t bytes;
   struct {
        uint8_t bit0:1;
        uint8_t bit1:1;
        uint8_t bit2:1;
        uint8_t bit3:1;
        uint8_t bit4:1;
        uint8_t bit5:1;
        uint8_t bit6:1;
        uint8_t bit7:1;
   } bits;
} _comandos1;

typedef union {
   uint8_t bytes;
   struct {
        uint8_t bit0:1;
        uint8_t bit1:1;
        uint8_t bit2:1;
        uint8_t bit3:1;
        uint8_t bit4:1;
        uint8_t bit5:1;
        uint8_t bit6:1;
        uint8_t bit7:1;
   } bits;
} _flags1;

typedef union {
   uint8_t bytes;
   struct {
        uint8_t bit0:1;
        uint8_t bit1:1;
        uint8_t bit2:1;
        uint8_t bit3:1;
        uint8_t bit4:1;
        uint8_t bit5:1;
        uint8_t bit6:1;
        uint8_t bit7:1;
   } bits;
} _ap1;





#endif	/* PROJECT_H */

