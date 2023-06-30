#include<stdio.h>

int main(){
	int a,b;
	scanf("%d%d", &a,&b);
	if(a>b){
		int c;
		b=c;
		a=b;
		c=a;
	}
	int tong=0;
	int i=1;
	for(i>=a ; i<=b;i++){
		tong+=i;
	}
	printf("%d", tong);
}