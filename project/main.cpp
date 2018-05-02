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
	PORTD=0xff;
	DDRD=0xff;
    /* Replace with your application code */
    while (1) 
    {
		PORTD=0xff;
		_delay_ms(300);
		PORTD=0x00;
		_delay_ms(300);
    }
}

