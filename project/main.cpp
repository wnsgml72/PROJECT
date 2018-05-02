/*
 * project.cpp
 *
 * Created: 2018-05-02 오후 3:36:15
 * Author : stc_164
 */ 
#define F_CPU 16000000UL

#include <avr/io.h>

#include <util/delay.h>


int main(void)
{	
	int i;
	PORTD=0xff;
	DDRD=0xff;
    /* Replace with your application code */
    while (1) 
    {
		for (int i=0; i<7; i++)
		{
			PORTD = ~(1 << i);
			_delay_ms(300);
		}
		for (int i=0; i<7; i++)
		{
			PORTD = ~(0x80 >> i);
			_delay_ms(300);
		}
    }
}

