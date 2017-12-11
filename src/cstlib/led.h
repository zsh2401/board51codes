#ifndef __LCD_H__
#define __LCD_H__
#include <reg51.h>
#define LED00 __gLedP20
#define LED01 __gLedP21
#define LED02 __gLedP22
#define LED03 __gLedP23
#define LED04 __gLedP24
#define LED05 __gLedP25
#define LED06 __gLedP26
#define LED07 __gLedP27
sbit __gLedP20 = P2^0;
sbit __gLedP21 = P2^1;
sbit __gLedP22 = P2^2;
sbit __gLedP23 = P2^3;
sbit __gLedP24 = P2^4;
sbit __gLedP25 = P2^5;
sbit __gLedP26 = P2^6;
sbit __gLedP27 = P2^7;
#endif