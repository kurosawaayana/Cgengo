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
	printf("a2�̒l��%d�ł�\n",a2);
	printf("b�̒l��%d�ł�\n",b);
}