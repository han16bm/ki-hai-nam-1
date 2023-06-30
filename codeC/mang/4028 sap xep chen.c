#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	int t=0;
	for(int t=0;t<n;t++){
		printf("Buoc %d: ",t);
		for(int i=0;i<=t;i++){
			for(int j=i+1;j<=t;j++){
				if(a[i]>a[j]){
					int tmp=a[i];
					a[i]=a[j];
					a[j]=tmp;
				}
			}
		}
		for(int i=0;i<=t;i++){
				printf("%d ",a[i]);
			}
		printf("\n");
	}
}