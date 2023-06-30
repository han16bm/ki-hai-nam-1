#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(int i=0;i<n;i++){
		int dem=0;
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
				dem=1;
			}
		}
		if(dem == 1){
			for(int k=0;k<n;k++){
				printf("%d ",a[k]);
			}
			printf("\n");
		}
	}
}