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
	printf("a�̒l��%d�ł�\n",a);
	printf("b�̒l��%d�ł�\n",b);
}