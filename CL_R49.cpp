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
	printf("a‚Ì’l‚Í%d‚Å‚·\n",a);
	printf("b‚Ì’l‚Í%d‚Å‚·\n",b);
}