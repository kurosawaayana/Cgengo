#include<stdio.h>
int sigma(int);
void main(void) {
	int a, ans;
	printf("‡Œv‚ğ‹‚ß‚½‚¢”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf("%d",&a);
	ans = sigma(a);
	printf("1‚©‚ç%d‚Ü‚Å‚Ì‡Œv‚Í%d‚Å‚·\n",a,ans);
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