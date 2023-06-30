#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	while(n--){
		long long N;
		scanf("%lld", &N);
		while(N>=0){
			int a,b;
			a=N%10;
			N = N/10;
			b=N%10;
			if(b>a){
				printf("NO\n");
				break;
			}
			if(N==0){
				printf("YES\n");
				break;
			}
		}
	}
}