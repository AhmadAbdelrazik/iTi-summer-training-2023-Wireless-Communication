/*
 * Mem_Maps.h
 *
 *  Created on: ???/???/????
 *      Author: Ahmed Abdelrazik
 */

#ifndef MEM_MAPS_H_
#define MEM_MAPS_H_

#include "std_types.h"
#include "Bitwise.h"

#define UBRRL (*(volatile unsigned char*)0x29)

#define UCSRB (*(volatile unsigned char*)0x2A)

#define RXCIE 		7
#define TXCIE 		6
#define UDRIE 		5
#define RXEN 		4
#define TXEN 		3
#define UCSZ 		2
#define UCSZ2 		2
#define RXB8		1
#define TXB8		0


#define UCSRA (*(volatile unsigned char*)0x2B)

#define RXC			7
#define TXC			6
#define UDRE		5
#define FE			4
#define DOR			3
#define UPE 		2
#define U2X			1
#define MPCM		0

#define UDR (*(volatile unsigned char*)0x2C)

#define UBRRH (*(volatile unsigned char*)0x40)

#define UCSRC (*(volatile unsigned char*)0x40)

#define URSEL		7
#define UMSEL		6
#define UPM1		5
#define UPM0		4
#define USBS		3
#define UCSZ1		2
#define UCSZ0		1
#define UCPOL		0

void UART_init();
void UART_Tx(uint8 VALUE);
uint8 UART_Rx();

#endif /* MEM_MAPS_H_ */
