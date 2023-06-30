#include<stdio.h>

int giaithua(int N){
	int gt=1;
	for(int i=1; i<= N; i++){
		gt = gt *i;
	}
	return gt;
}

int ketqua(int N){
	int n=0;
	while(N>0){
		n += giaithua(N%10);
		N /= 10;
	}
	return n;
}

int main(){
	int N;
	scanf("%d", &N);
	if(N == ketqua(N)){
		printf("1");
	}
	else{
		printf("0");
	}
}