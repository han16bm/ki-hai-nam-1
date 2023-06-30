#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		int sum=1;
		int a[100];
		scanf("%d", &n);
		for(long long i=0;i<n;i++){
			scanf("%lld", &a[i]);
		}
		long long b=a[0];
		for(long long i=1;i<n;i++){
			if(a[i]>b){
				sum=sum+1;
				b=a[i];
			}
		}
		printf("%d",sum);
		printf("\n");
	}
}