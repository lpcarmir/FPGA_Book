/*
 * main.c
 *
 *  Created on: Nov 22, 2024
 *      Author: lpcarm
 */

#include <stdint.h>
#define PORTA (*(uint32_t *)0x81400000)
#define DDRA (*(uint32_t *)0x81400004)

#define RXREG   (*((int *)0x84000000))
#define TXREG   (*((int *)0x84000004))
#define STATUS  (*((int *)0x84000008))
#define CONTROL (*((int *)0x8400000C))

void delay(uint32_t x);

uint8_t x;

int main()
{
	DDRA=0x0000F0;
	while(1)
	{
		while((STATUS & (1<<0))==0);
		x=RXREG;
		TXREG=x;
	}
	return 0;
}

void delay(uint32_t x)
{
	uint32_t i,j;
	for(j=0;j<x;j++)
	{
		for(i=0;i<1000;i++);
	}
}




