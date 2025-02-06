/*
 * main.c
 *
 *  Created on: Nov 22, 2024
 *      Author: lpcarm
 */

#include <stdint.h>
#define PORTA (*(uint32_t *)0x81400000)
#define DDRA (*(uint32_t *)0x81400004)

void delay(uint32_t x);

int main()
{
	DDRA=0x0000F0;
	while(1)
	{
		PORTA=1<<0;
		delay(2000);
		PORTA=1<<1;
		delay(2000);
		PORTA=1<<2;
		delay(2000);
		PORTA=1<<3;
		delay(2000);
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
