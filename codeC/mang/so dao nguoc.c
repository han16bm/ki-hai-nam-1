#include<stdio.h>

int main(){
	int n;
	scanf("%d\n", &n);
	int a[100];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(int i=n-1;i>=0;i--){
		printf("%d ", a[i]);
	}
}