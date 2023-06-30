#include<stdio.h>

int main(){
	int n,m;
	scanf("%d%d", &n, &m);
	for( int i=1; i<=n;i++){
		printf("%d", i);
		if(i<m){
			for(int j=1;j<m;j++){
				if(i+j<=m){
				printf("%d", i+j);
				}
				if(i+j>m){
				printf("%d", 2*m-i-j);
				}
			}
		}
		if(i>=m){
			for(int j=i-1;j>i-m;j--){
				printf("%d", j);
			}
		}
		printf("\n");
	}
}