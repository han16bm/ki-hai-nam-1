#include<stdio.h>

int main(){
	int N;
	scanf("%d", &N);
	int sole=0;
	int sochan=0;
	while(N>0){
		int a;
		a=N%10;
		if(a%2==1){
			sole +=1;
		} else{
			sochan+=1;
		}
		N=N/10;
	}
	printf("%d %d", sole, sochan);
}