#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int m=n-1;
	for( int i=1; i<=n;i++){
		for(int j=i; j<=n-1;j++){
			
			printf("~");
		}
		
		for(int j=n+n-i; j<n*2; j++)
		{
			printf("*");
		}
		
		
		printf("\n");
	}
}