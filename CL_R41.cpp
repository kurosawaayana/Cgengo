#include<stdio.h>

int factorial(int n);

void main(void){
	int n,r;
	printf("���������Ă�������:");
	scanf("%d",&n);
	r=factorial(n);
	printf("%d�̊K���%d�ł�\n",n,r);
}

int factorial(int n){
	int i,r;
	r=1;
	for(i=1;i<=n;i++){
		r=r*i;
	}
	return r;
}