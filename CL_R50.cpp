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
	printf("a2の値は%dです\n",a2);
	printf("bの値は%dです\n",b);
}