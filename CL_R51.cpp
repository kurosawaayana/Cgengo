#include<stdio.h>
void kansuu(int);

void main(void){
	int a;
	a = 100;
	kansuu(a);
	printf("mainのaの値は%dです\n",a);
}

void kansuu(int a) {
	int b;
	b = 200;
	printf("aの値は%dです\n",a);
	printf("bの値は%dです\n",b);
}