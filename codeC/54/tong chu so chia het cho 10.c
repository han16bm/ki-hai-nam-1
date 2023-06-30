#include<stdio.h>

int chiahet(int n){
	int sum=0;
	while(n>0){
		sum=sum+n%10;
		n/=10;
	}
	if(sum%10==0)	return 1;
	else	return 0;
}
int main(){
	int a,n;
	scanf("%d", &a);
	while(a--){
		scanf("%d", &n);
		if( chiahet(n)==1)	printf("YES\n");
		else	printf("NO\n");
	}
}
