#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void gameStart(void);

void main(void){
	time_t t1, t2;

	time(&t1);
	gameStart();
	time(&t2);
	printf("‚©‚©‚Á‚½ŠÔ‚Í%.0f•b‚Å‚·\n",difftime(t2,t1));
}

void gameStart(void) {
	int kazu,kotae;
	kotae = rand() % 100;
	while (1) {
		printf("”‚ğ“–‚Ä‚Ä‚­‚¾‚³‚¢(0`99);");
		scanf("%d",&kazu);
		if (kazu == kotae){
			break;
		} else if (kazu < kotae) {
			printf("¬‚³‚¢!\n");
		} else {
			printf("‘å‚«‚¢!\n");
		}
	}
	printf("³‰ğ!");
}