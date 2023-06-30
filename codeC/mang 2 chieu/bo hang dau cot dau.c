#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	for(int c=1;c<=t;c++){
		int m,n;
		int a[100][100];
		scanf("%d %d", &m, &n);
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				scanf("%d", &a[i][j]);
			}
		}
		printf("Test %d:\n",c);
		for(int i=1;i<m;i++){
			for(int j=1;j<n;j++){
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
}