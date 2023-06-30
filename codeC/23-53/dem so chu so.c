#include<stdio.h>

int main(){
	int N;
	scanf("%d", &N);
	int dem=0;
	while(N>0){
		dem += 1;
		N=N/10;
	}
	printf("%d", dem);
}