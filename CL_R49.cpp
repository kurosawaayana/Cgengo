#include<stdio.h>
void kansuu(void);

void main(void){
	int a;
	a = 100;
	kansuu();
}

void kansuu(void) {
	int b;
	b = 200;
	printf("aの値は%dです\n",a);
	printf("bの値は%dです\n",b);
}