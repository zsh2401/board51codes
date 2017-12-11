#include "delay.h"
extern void delayr(void){
	unsigned char i = 0,j=0,k=0;
	for(;i<__WAIT_VALUE;i++)
		for(;j<__WAIT_VALUE;j++)
			for(;k<__WAIT_VALUE;k++);
}