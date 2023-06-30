#include<stdio.h>

int main(){
	int N;
	scanf("%d", &N);
	int socuoi = N%10;
	int sodau;
	while( N > 0){
		sodau=N%10;
		N=N/10;
	}
	printf("%d %d", sodau,socuoi);
}