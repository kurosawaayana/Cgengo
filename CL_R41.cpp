#include<stdio.h>

int factorial(int n);

void main(void){
	int n,r;
	printf("®”‚ğ“ü‚ê‚Ä‚­‚¾‚³‚¢:");
	scanf("%d",&n);
	r=factorial(n);
	printf("%d‚ÌŠKæ‚Í%d‚Å‚·\n",n,r);
}

int factorial(int n){
	int i,r;
	r=1;
	for(i=1;i<=n;i++){
		r=r*i;
	}
	return r;
}