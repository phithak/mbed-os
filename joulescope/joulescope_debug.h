#ifndef MBED_H
#include "mbed.h"
#endif

#ifndef JOULESCOPE_DEBUG_H
#define JOULESCOPE_DEBUG_H

// trigger with pulse signal for IN1
void js_pulse(int n);

// trigger up and down for IN0
void js_trig_up();
void js_trig_down();

/*
// convert array of byte to hex string
#define JS_MAX_HEX_SIZE	64
char *js_byte2hex(uint8_t *input, uint16_t input_size);
*/
#endif
