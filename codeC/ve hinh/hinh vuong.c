#include<stdio.h>

int min(int a,int b){
	if(a>b)	return b;
	return a;
}
int main(){
	int n;
	scanf("%d", &n);
	for(int i=1;i<=2*n-1;i++){
		for(int j=1;j<=2*n-1;j++){
			printf("%d",n-min(min(i-1,j-1),min(2*n-1-i,2*n-1-j)));
		}
		printf("\n");
	}
}