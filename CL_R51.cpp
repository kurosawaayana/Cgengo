#include<stdio.h>
void kansuu(int);

void main(void){
	int a;
	a = 100;
	kansuu(a);
	printf("main��a�̒l��%d�ł�\n",a);
}

void kansuu(int a) {
	int b;
	b = 200;
	printf("a�̒l��%d�ł�\n",a);
	printf("b�̒l��%d�ł�\n",b);
}