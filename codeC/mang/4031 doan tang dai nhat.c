#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int x=1;x<=t;x++){
		int n;
		scanf("%d", &n);
		int a[n];
		int b[100]={1};
		int max=0;
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
		}
		int d=1;
		for(int i=1;i<n;i++){
			if(a[i]>a[i-1]){
				d++;
				b[i]=d;
			}
			else{
				d=1;
			}
			if(b[i]>max){
				max=b[i];
			}
		}
		printf("Test %d:\n",x);
		printf("%d\n",max);
		for(int i=0;i<n;i++){
			if(b[i]==max){
				for(int j=i-max+1;j<=i;j++){
					printf("%d ",a[j]);
				}
				printf("\n");
			}
		}
		printf("\n");
	}
}