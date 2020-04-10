/* 
 * File:   irRecv.h
 * Author: dcangi
 *
 * Created on April 10, 2020, 6:35 PM
 */

#ifndef IRRECV_H
#define	IRRECV_H


// public:
//IRrecv (int recvpin) ;

uint8_t     irRecv_decode       ( decode_results *results );
uint8_t     irRecv_isIdle       ( void );
void        irRecv_resume       ( void );



#endif	/* IRRECV_H */

