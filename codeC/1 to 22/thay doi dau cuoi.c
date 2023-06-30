#include<stdio.h>

int main(){
	int N;
	scanf("%d", &N);
	int a=0;
	while(N>0){
		a=a*10+(N%10);
		N=N/10;
	}
	printf("%d", a);
}