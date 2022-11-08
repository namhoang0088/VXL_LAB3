/*
 * software_timer.h
 *
 *  Created on: Oct 10, 2022
 *      Author: ACER
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer1_counter;
extern int timer1_flag;
extern int TIMER_CYCLE;
void setTimer1 ( int duration );
void timer_run();

extern int timer2_counter;
extern int timer2_flag;
void setTimer2 ( int duration );
void timer_run2();

#endif /* INC_SOFTWARE_TIMER_H_ */
