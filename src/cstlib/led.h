#ifndef __LED_H__
#define __LED_H__
#include <reg51.h>
/*宏定义方便操作LED开关*/
#define LED_PORT P2
#define ALL_ON 0x00
#define ALL_OFF 0xff
#define LED00 __gLedP20
#define LED01 __gLedP21
#define LED02 __gLedP22
#define LED03 __gLedP23
#define LED04 __gLedP24
#define LED05 __gLedP25
#define LED06 __gLedP26
#define LED07 __gLedP27
/*具体LED的正极*/
sbit __gLedP20 = LED_PORT^0;
sbit __gLedP21 = LED_PORT^1;
sbit __gLedP22 = LED_PORT^2;
sbit __gLedP23 = LED_PORT^3;
sbit __gLedP24 = LED_PORT^4;
sbit __gLedP25 = LED_PORT^5;
sbit __gLedP26 = LED_PORT^6;
sbit __gLedP27 = LED_PORT^7;
extern void led_set(unsigned char _value);
#endif