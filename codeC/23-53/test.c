#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=2*n;j++){
			if(i+j<=2*n){
				if(i+j<=n){
				printf("~");
				}
				else if(i==1 || i==n || i+j -1 ==n || i+j == 2*n){
				printf("*");
				}
				else{
					printf(".");
				}
			}
		}
		printf("\n");
	}
}