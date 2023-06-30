#include<stdio.h>

int main(){
	int t;	scanf("%d",&t);
	for(int v=1; v<=t; v++){
		int n;
		scanf("%d", &n);\
		int a[n][n];
		for(int i=0;i<n;i++){
			int cnt=1;
			for(int j=0;j<n;j++){
				if(i >= j){
					a[i][j] = cnt;
					cnt++;
				}
				else 	a[i][j] = 0;
			}
		}
		int b[n][n],c[n][n];
		printf("Test %d:\n", v);
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				b[i][j] = a[j][i];
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				c[i][j]=0;
				for(int k=0;k<n;k++){
					c[i][j] += a[i][k] * b[k][j];
				}
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				printf("%d ", c[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
}