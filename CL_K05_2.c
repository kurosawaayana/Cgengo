/*作成者:1T1(14)黒澤文菜*/
/*課題05_2*/

#include<stdio.h>

struct data{
	char   name[256];
	double height;
	double weight;
};

void main(void){
	struct data   sdAry[4]={{"岩崎デジ太",175.5,73.2},
	                        {"岩崎ハマ子",153.3,49.5},
	                        {"岩崎太郎",167.7,80.3},
                        	{"岩崎花子",162.0,47.9}};
	int i;
	printf("測定結果:\n");
	for (i = 0; i < 4; i ++) {
		printf("%-10s  ", sdAry[i].name);
		printf("%.1fcm、", sdAry[i].height);
		printf("%.1fkg\n", sdAry[i].weight);
	}
}