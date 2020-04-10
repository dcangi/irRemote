/* 
 * File:   irRemote.h
 * Author: dcangi
 *
 * Created on 07 de abril de 2020, 14:11
 */

#ifndef IRREMOTE_H
#define	IRREMOTE_H

#include "mcc_generated_files/mcc.h"

//#define NEC_BITS          32
//#define NEC_HDR_MARK    9000
//#define NEC_HDR_SPACE   4500
//#define NEC_BIT_MARK     560
//#define NEC_ONE_SPACE   1690
//#define NEC_ZERO_SPACE   560
//#define NEC_RPT_SPACE   2250

//------------------------------------------------------------------------------
// Information for the Interrupt Service Routine
//
#define RAWBUF  101  // Maximum length of raw duration buffer

typedef struct {
    // The fields are ordered to reduce memory over caused by struct-padding
    uint8_t       rcvstate;        // State Machine state
//    uint8_t       recvpin;         // Pin connected to IR data from detector
//    uint8_t       blinkpin;
//    uint8_t       blinkflag;       // true -> enable blinking of pin on IR processing
    uint8_t       rawlen;          // counter of entries in rawbuf
    unsigned int  timer;           // State timer, counts 50uS ticks.
    unsigned int  rawbuf[RAWBUF];  // raw data
    uint8_t       overflow;        // Raw buffer overflow occurred
} irparams_t;

// ISR State-Machine : Receiver States
#define STATE_IDLE      2
#define STATE_MARK      3
#define STATE_SPACE     4
#define STATE_STOP      5
#define STATE_OVERFLOW  6

// Due to sensor lag, when received, Marks  tend to be 100us too long and
//                                   Spaces tend to be 100us too short
//#define MARK_EXCESS    100

// Upper and Lower percentage tolerances in measurements
//#define TOLERANCE       25
//#define LTOL            (1.0 - (TOLERANCE/100.))
//#define UTOL            (1.0 + (TOLERANCE/100.))

// Minimum gap between IR transmissions
#define USECPERTICK     50
#define _GAP            5000
#define GAP_TICKS       (_GAP/USECPERTICK)

//#define TICKS_LOW(us)   ((int)(((us)*LTOL/USECPERTICK)))
//#define TICKS_HIGH(us)  ((int)(((us)*UTOL/USECPERTICK + 1)))

//------------------------------------------------------------------------------
// IR detector output is active low
//
#define MARK   0
#define SPACE  1




/*****************************************************************************/
//  PROTOTIPOS
/*****************************************************************************/
void        irRemote_init           ( void );
void        irRemote_handler        ( void );
uint8_t     irRemote_isIdle         ( void );
void        irRemote_resume         ( void );

//----------------------------------------------------------------------------/
uint8_t     irRemote_Recibio        ( uint8_t flag );
void        irRemote_GetRecibido    ( uint8_t *dataH, uint8_t *dataL );
void        irRemote_ClearRecFlag   ( uint8_t flag );
/*****************************************************************************/




#endif	/* IRREMOTE_H */



