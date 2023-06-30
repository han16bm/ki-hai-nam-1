#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[100][100]={0};
	int d='A';
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			a[i][j]=d++;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[j][i]!=0){
				printf("%c ",a[j][i]);
			}
		}
		printf("\n");
	}
}