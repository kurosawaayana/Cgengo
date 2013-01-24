/*作成者:1T1(14)　黒澤文菜*/
/*課題05_1*/

#include<stdio.h>

struct data{
	char name[256];
	double height;
	double weight;
};

void main(void){
	struct data  sd={"岩崎デジ太",175.5,73.2};

	printf("測定結果:\n");
	printf("%s %.1fcm、%.1fkg\n\n",sd.name,sd.height,sd.weight);
}