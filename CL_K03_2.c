/*�쐬��:1T1(14)���V����*/
/*�ۑ薼:�ۑ�03_3*/

#include<stdio.h>

void main(void){
	int i,j;
	int ans = 1;
	for(i=1;i<=10;i=i++){
		for(j=1;j<=10;i++);
		ans = ans * j;
	}
	printf("10�̊K���%d�ł��B\n",ans);
}