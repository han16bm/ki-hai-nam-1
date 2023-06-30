#include<stdio.h>

int main(){
	int N;
	int a[10];
	scanf("%d", &N);
	if(N>0 && N<11)
	for(int i=1;i<11;i++){
		a[i]= N*i;
		printf("%d ", a[i]);
	}
	return 0;
}