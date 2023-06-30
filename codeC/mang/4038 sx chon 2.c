#include<stdio.h> 

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			int m, min = a[i];
			for(int k=j;k<n;k++){
				if(min > a[k]){
					min = a[k];
				}
			}
			if(a[j] == min){
				m=j;
				int tmp=a[i];
				a[i]=a[m];
				a[m]=tmp;
			}
		}
		for(int l=0;l<n;l++){
			printf("%d ",a[l]);
		}
		printf("\n");
	}
}