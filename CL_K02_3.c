/*作成者:1T1(14)黒澤文菜*/
/*課題名:課題02_3*/


#include<stdio.h>

void main(void)
{
int pencil;

	printf("鉛筆の本数を入力してください：");
	scanf("%d", &pencil);

	if (pencil == 0)
	{
		printf("エラー:かぞえられません\n");
	}
	else if ((pencil % 10) == 3)
	{
		printf("えんぴつのかずは%dぼんです\n", pencil);
	}
	else if ( ((pencil%10)==2) || ((pencil%10)==4) || ((pencil%10)==5) || ((pencil%10)==7) || ((pencil%10)==9) )
	{
		printf("えんぴつのかずは%dほんです\n", pencil);
	}
	else if ( ((pencil%10)==0) || ((pencil%10)==1) || ((pencil%10)==6) || ((pencil%10)==8) )
	{
		printf("えんぴつのかずは%dぽんです\n", pencil);
	}
}