#include<stdio.h>
#include<string.h>

void main(void){
	char a[]="AppleOrangeMango",b[256];
	printf("���������͂��Ă�������:");
	scanf("%s",b);
	if (strstr(a,b) == NULL){
		printf("������%s�̒���%s�͊܂܂�Ă��܂���\n",a,b);
	} else {
		printf("������%s�̒���%s��������܂���\n",a,b);
	}
}