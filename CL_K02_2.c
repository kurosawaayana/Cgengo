#include<stdio.h>
void main(void){
	int a,b;
	printf("aの値を入力してください");
	scanf("%d",&a);
	printf("bの値を入力してください");
	scanf("%d",&b);
	if(b>0){ //if(b==0)
		printf("%dと%dで割った結果は%dです\n",a,b,a/b);
		printf("%dと%dで割った結果は%dです\n",a,b,a%b);
	}else{
		printf("0で割れません\n");
	}
}