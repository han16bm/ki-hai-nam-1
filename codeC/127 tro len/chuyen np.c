#include<stdio.h>
#include<math.h>

int main(){
	int n;
	scanf("%d", &n);
	if(n==0){
		printf("0");
	}
	int a[10000];
	int k=0;
	while(n!=0){
		a[k]=n%2;
		n=n/2;
		k++;
	}
	for(int i=k-1;i>=0;i--){
		printf("%d",a[i]);
	}
}