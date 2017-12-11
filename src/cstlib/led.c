#include "led.h"
extern void led_set(unsigned char _value){
	LED_PORT = _value;
}
