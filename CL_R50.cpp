#include<stdio.h>
void kansuu(int);

void main(void){
	int a;
	a = 100;
	kansuu(a);
}

void kansuu(int a2) {
	int b;
	b = 200;
	printf("a2‚Ì’l‚Í%d‚Å‚·\n",a2);
	printf("b‚Ì’l‚Í%d‚Å‚·\n",b);
}