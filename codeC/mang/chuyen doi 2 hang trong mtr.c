#include<stdio.h>

int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	int k[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d", &k[i][j]);
		}
	}
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=0;i<n;i++){
		int tmp= k[a-1][i];
		k[a-1][i]=k[b-1][i];
		k[b-1][i]=tmp;
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d ", k[i][j]);
		}
		printf("\n");
	}
}