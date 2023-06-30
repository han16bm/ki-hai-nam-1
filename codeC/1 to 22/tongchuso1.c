#include<stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		long long n;
		scanf("%d", &n);
		int sum=0;
		while(n>0){
			sum=sum+n%10;
			n = n/10;			
		}
		printf("%d\n", sum);
	}
}