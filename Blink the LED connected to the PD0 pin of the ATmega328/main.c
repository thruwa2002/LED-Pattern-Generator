/*
 * labshet12.c
 *
 * Created: 5/5/2025 9:45:30 AM
 * Author : Asus
 */ 

#define F_CPU 1000000UL  // 1 MHz clock
#include <avr/io.h>
#include <util/delay.h>

int main(void) {
	DDRD |= (1 << PD0);  // Set PD0 as output

	while (1) {
		PORTD |= (1 << PD0);  // Turn ON PD0
		_delay_ms(500);       // Wait 500 milliseconds

		PORTD &= ~(1 << PD0); // Turn OFF PD0
		_delay_ms(500);       // Wait 500 milliseconds
	}
}


