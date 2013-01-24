#include<stdio.h>
void kansuu(int);

void main(void){
	int a;
	a = 100;
	kansuu(a);
	printf("main‚Ìa‚Ì’l‚Í%d‚Å‚·\n",a);
}

void kansuu(int a) {
	int b;
	b = 200;
	printf("a‚Ì’l‚Í%d‚Å‚·\n",a);
	printf("b‚Ì’l‚Í%d‚Å‚·\n",b);
}