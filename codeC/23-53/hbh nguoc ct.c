#include<stdio.h>

int main(){
	int a,b;
	scanf("%d%d", &a, &b);
	for(int i=1;i<=a;i++){
		for(int j=1;j<=a+b-2;j++){
			if(i+j<=a+b-2){
				if(j<i-1){
					printf("~");
				}
				else 
				printf("*");
			}
			
		}
		printf("\n\n");
	}
}