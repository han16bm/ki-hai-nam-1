#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=2*i-1;j=j+2){
				printf("%d",j);
		}
		for(int j=2*i+1;j<4*i-2;j=j+2){
			printf("%d",4*i-j-2);
		}
		printf("\n");
	}
}