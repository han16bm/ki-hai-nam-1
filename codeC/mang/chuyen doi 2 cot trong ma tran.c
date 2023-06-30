#include<stdio.h>

int main(){
	int m,n;
	scanf("%d%d", &m, &n);
	int k[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d", &k[i][j]);
		}
	}
	int a,b;
	scanf("%d%d", &a, &b);
	for(int i=0;i<m;i++){
		int tmp= k[i][a-1];
		k[i][a-1] = k[i][b-1];
		k[i][b-1]= tmp;
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d ", k[i][j]);
		}
		printf("\n");
	}
}