#include<stdio.h>
#include<ctype.h>

void main(void){
	int c;
	while(1){
		printf("��������͂��Ă�������:");
		c=getchar();
		fflush(stdin);
		if(c==EOF){
			break;
		}
		if(toupper(c)=='Y'){
			puts("�͂�");
		}else{
			puts("������");
		}
	}
}