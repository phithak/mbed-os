#include "joulescope_debug.h"
#include <string.h>

DigitalOut js_sig_type(D7);		// IN1 on JouleScope
DigitalOut js_sig_trig(D15);	// IN0 on JouleScope

void js_pulse(int n) {
	int i;

	for (i = 0; i < n; ++i) {
		js_sig_type = 1;
		wait_us(1);
		js_sig_type = 0;
		wait_us(1);
	}
	wait_us(1);
}

void js_trig_up() {
	js_sig_trig = 1;
}

void js_trig_down() {
	js_sig_trig = 0;
}
