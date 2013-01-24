#include<stdio.h>
#define KAKEZAN(x,y) x * y

void main(void) {
	int a,b,c;
	printf("2‚Â‚Ì”’l‚ğ‹ó”’‚Å‹æØ‚Á‚Ä“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf("%d %d", &a, &b);
	c = KAKEZAN(a,b);
	printf("Š|‚¯Z%d*%d‚Ì“š‚¦‚Í%d‚Å‚·\n",a,b,c);
}