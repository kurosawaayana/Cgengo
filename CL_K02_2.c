#include<stdio.h>
void main(void){
	int a,b;
	printf("a�̒l����͂��Ă�������");
	scanf("%d",&a);
	printf("b�̒l����͂��Ă�������");
	scanf("%d",&b);
	if(b>0){ //if(b==0)
		printf("%d��%d�Ŋ��������ʂ�%d�ł�\n",a,b,a/b);
		printf("%d��%d�Ŋ��������ʂ�%d�ł�\n",a,b,a%b);
	}else{
		printf("0�Ŋ���܂���\n");
	}
}