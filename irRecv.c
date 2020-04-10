#include "irRemote.h"
#include "irRecv.h"

 typedef enum 
 {
    UNKNOWN      = -1,
    UNUSED       =  0,
    RC5,
    RC6,
    NEC,
    SONY,
    PANASONIC,
    JVC,
    SAMSUNG,
    WHYNTER,
    AIWA_RC_T501,
    LG,
    SANYO,
    MITSUBISHI,
    DISH,
    SHARP,
    DENON,
    PRONTO,
    LEGO_PF,
}decode_type_t;

// declarar este tipo de variable!! lpm
 typedef struct 
 {
         decode_type_t          decode_type;  
         unsigned int           address;      
         unsigned long          value;        
         int                    bits;         
         volatile unsigned int  *rawbuf;      
         int                    rawlen;       
         int                    overflow;     
 }decode_results;


decode_results results;

// desarrollar esta funciones
uint8_t     irRecv_decode       ( decode_results *results );
uint8_t     irRecv_isIdle       ( void );
void        irRecv_resume       ( void );



//+=============================================================================
// Decodes the received IR message
// Returns 0 if no data ready, 1 if data ready.
// Results of decoding are stored in results
//
uint8_t  irRecv_decode (decode_results *results)
{
	results->rawbuf   = irparams.rawbuf;
	results->rawlen   = irparams.rawlen;

	results->overflow = irparams.overflow;

	if (irparams.rcvstate != STATE_STOP)  return false ;
