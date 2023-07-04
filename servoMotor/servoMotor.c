#include <avr/io.h>#include <util/delay.h>#include "servoMotor.h"void activeServoMotors(){	DDRD |= (1<<PD6);	DDRD |= (1<<PD7); }void moveUp(){	PORTD |= (1<<PD6);	_delay_us(2000);	PORTD &= ~(1<<PD6);		_delay_ms(2000);}void moveDown(){	PORTD |= (1<<PD6);	_delay_us(1000);	PORTD &= ~(1<<PD6);		_delay_ms(2000);}void turnLeft(){	PORTD |= (1<<PD7);	_delay_us(1000);	PORTD &= ~(1<<PD7);		_delay_ms(2000);}void turnRight(){	PORTD |= (1<<PD7);	_delay_us(2000);	PORTD &= ~(1<<PD7);		_delay_ms(2000);}void straight(){	PORTD |= (1<<PD7);	_delay_us(1500);	PORTD &= ~(1<<PD7);		_delay_ms(2000);}