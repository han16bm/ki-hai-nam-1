#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=2*i-1;j++){
			if(i>=j)	printf("%d",2*j);
			else 	printf("%d",4*i-2*j);
		}
		printf("\n");
	}
}