#include<stdio.h>
#define KAKEZAN(x,y) x * y

void main(void) {
	int a,b,c;
	printf("2�̐��l���󔒂ŋ�؂��ē��͂��Ă�������:");
	scanf("%d %d", &a, &b);
	c = KAKEZAN(a,b);
	printf("�|���Z%d*%d�̓�����%d�ł�\n",a,b,c);
}