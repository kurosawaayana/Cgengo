#include<stdio.h>
void kansuu(int);
int a;

void main(void){
	int b1;
	a = 100;
	b1 = 200;
	printf("3:a�̒l��%d�ł�\n",a);
	printf("2:b1�̒l��%d�ł�\n",b1);
	kansuu(b1);
	printf("3;a�̒l��%d�ł�\n",a);
	printf("4:b1�̒l��%d�ł�\n",b1);
}

void kansuu(int b2){
	int b3;
	a = a * 2;
	printf("5:a�̒l��%d�ł�\n",a);
	b3 = b2 * 2;
	printf("6:b3�̒l��%d�ł�\n",b3);
	a = a * 2;
}