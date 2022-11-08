/*
 * software_timer.c
 *
 *  Created on: Oct 10, 2022
 *      Author: ACER
 */

#include "software_timer.h"
#include "display7SEG.h"
int timer1_counter = 0;
int timer1_flag = 0;
int TIMER_CYCLE = 10;

void setTimer1 ( int duration ) {
 timer1_counter = duration ;
 timer1_flag = 0;
 }


 void timer_run () {
 if( timer1_counter > 0) {
 timer1_counter --;
 displayTIME(timer1_counter/100);
 }
 if( timer1_counter == 0) timer1_flag = 1;
}


 int timer2_counter = 0;
 int timer2_flag = 0;

 void setTimer2 ( int duration ) {
  timer2_counter = duration ;
  timer2_flag = 0;
  }

  void timer_run2 () {
  if( timer2_counter > 0) {
  timer2_counter --;
  }
  if( timer2_counter == 0) timer2_flag = 1;
 }
