#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[100];
	int b1=99,b2=99;
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(int i=0;i<n;i++){
		if(b1>=a[i]){
			b1=a[i];
		}
	}
	for(int i=0;i<n;i++){
		if(a[i]>b1 && b2>a[i]){
			b2=a[i];
		}
	}
	printf("%d %d", b1,b2);
}