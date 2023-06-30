#include<stdio.h>

int main(){
	int n,m;
	scanf("%d%d", &n, &m);
	for( int i=1; i<=n;i++){
		for(int j=n-i+1;j>0 && j>=n-m-i+2;j--){
			printf("%d", j);
		}
		
		
		
		printf("\n");
	}
}