#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i=1; i<= n; i++){
		long long a;
		scanf("%ld", &a);
		printf("%ld\n", (long long)(a*a));
	}
	return 0;	
}