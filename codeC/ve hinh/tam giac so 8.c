#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[100][100];
	int d=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			if(i%2==0){
				a[i][j]=d++;
			}
			if(i%2==1){
				a[i][i-j]=d++;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}