#include<stdio.h>
#include<ctype.h>

void main(void){
	int c;
	while(1){
		printf("•¶Žš‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
		c=getchar();
		fflush(stdin);
		if(c==EOF){
			break;
		}
		if(toupper(c)=='Y'){
			puts("‚Í‚¢");
		}else{
			puts("‚¢‚¢‚¦");
		}
	}
}