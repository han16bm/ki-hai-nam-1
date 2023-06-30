#include<stdio.h>

int main(){
	int a,b;
	scanf("%d%d", &a,&b);
	if(a>b){
		int c=a;
		a=b;
		b=c;
	}
	int tong=0;
	for(int i=a ; i<=b;i++){
		tong+=i;
	}
	printf("%d", tong);
}