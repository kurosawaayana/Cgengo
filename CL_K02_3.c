/*�쐬��:1T1(14)���V����*/
/*�ۑ薼:�ۑ�02_3*/


#include<stdio.h>

void main(void)
{
int pencil;

	printf("���M�̖{������͂��Ă��������F");
	scanf("%d", &pencil);

	if (pencil == 0)
	{
		printf("�G���[:���������܂���\n");
	}
	else if ((pencil % 10) == 3)
	{
		printf("����҂̂�����%d�ڂ�ł�\n", pencil);
	}
	else if ( ((pencil%10)==2) || ((pencil%10)==4) || ((pencil%10)==5) || ((pencil%10)==7) || ((pencil%10)==9) )
	{
		printf("����҂̂�����%d�ق�ł�\n", pencil);
	}
	else if ( ((pencil%10)==0) || ((pencil%10)==1) || ((pencil%10)==6) || ((pencil%10)==8) )
	{
		printf("����҂̂�����%d�ۂ�ł�\n", pencil);
	}
}