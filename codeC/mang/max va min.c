#include<stdio.h>
#include<string.h>

long long max(long long n){
	long long a=0;
	long long c=1;
	while(n!=0){
		long long b=n%10;
		if (b == 5){
			b=6;
		}
		a=a+b*c;
		c=c*10;
		n=n/10;
	}
	return a;
}
long long min(long long n){
	long long a=0;
	long long c=1;
	while(n!=0){
		long long b=n%10;
		if(b == 6){
			b=5;
		}
		a=a+b*c;
		c=c*10;
		n=n/10;
	}
	return a;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long x,y;
		scanf("%lld %lld", &x, &y);
		printf("%lld ", min(x) + min(y) );
		printf("%lld", max(x) + max(y));
		printf("\n");
	}
}