/*�쐬��:1T1(14)�@���V����*/
/*�ۑ�05_1*/

#include<stdio.h>

struct data{
	char name[256];
	double height;
	double weight;
};

void main(void){
	struct data  sd={"���f�W��",175.5,73.2};

	printf("���茋��:\n");
	printf("%s %.1fcm�A%.1fkg\n\n",sd.name,sd.height,sd.weight);
}