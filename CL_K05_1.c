/*ì¬Ò:1T1(14)@àV¶Ø*/
/*Ûè05_1*/

#include<stdio.h>

struct data{
	char name[256];
	double height;
	double weight;
};

void main(void){
	struct data  sd={"âèfW¾",175.5,73.2};

	printf("ªèÊ:\n");
	printf("%s %.1fcmA%.1fkg\n\n",sd.name,sd.height,sd.weight);
}