#include<stdio.h>

long long gt(long long n){
	long long gt=1;
	for(int i=1;i<=n;i++){
		gt=gt*i;
	}
	return gt;
}

long long str(long long n){
	long long sum=0;
	int a;
	while(n>0){
		a=n%10;
		sum=sum+gt(a);
		n=n/10;
	}
	return sum;
}

int main(){
	long long n;
	scanf("%lld", &n);
	for(long long i=1; i<=n;i++){
		if(str(i)==i){
			printf("%d ", i);
		}
	}
	return 0;
}