#include<stdio.h>
#include<ctype.h>

void main(void){
	int c;
	while(1){
		printf("文字を入力してください:");
		c=getchar();
		fflush(stdin);
		if(c==EOF){
			break;
		}
		if(toupper(c)=='Y'){
			puts("はい");
		}else{
			puts("いいえ");
		}
	}
}