#include<stdio.h>
void main(void){
	int a,b;
	printf("a‚Ì’l‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
	scanf("%d",&a);
	printf("b‚Ì’l‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
	scanf("%d",&b);
	if(b>0){ //if(b==0)
		printf("%d‚Æ%d‚ÅŠ„‚Á‚½Œ‹‰Ê‚Í%d‚Å‚·\n",a,b,a/b);
		printf("%d‚Æ%d‚ÅŠ„‚Á‚½Œ‹‰Ê‚Í%d‚Å‚·\n",a,b,a%b);
	}else{
		printf("0‚ÅŠ„‚ê‚Ü‚¹‚ñ\n");
	}
}