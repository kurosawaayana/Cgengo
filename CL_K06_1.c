#include<stdio.h>
int sigma(int);
void main(void) {
	int a, ans;
	printf("合計を求めたい数を入力してください:");
	scanf("%d",&a);
	ans = sigma(a);
	printf("1から%dまでの合計は%dです\n",a,ans);
}
int sigma(int a){
	int i,ans;
	ans = 0;
	if (a <= 0) {
		        return 0;
	}else{
		        for(i = 1; i <= a; i++){
					       ans = ans + i;
				}
				return ans;
	}
}