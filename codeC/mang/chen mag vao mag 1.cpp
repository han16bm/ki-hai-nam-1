#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	for(int p=1;p<=t;p++){
		
		int n,m,k;
		scanf("%d%d%d", &n,&m, &k);
		int a[100], b[100];
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
		}
		for(int j=0;j<m;j++){
			scanf("%d", &b[j]);
		}
		printf("Test %d:\n",p);
		for(int i=0;i<k;i++){
			printf("%d ", a[i]);
		}
		for(int j=0;j<m;j++){
			printf("%d ",b[j]);
		}
		for(int i=k;i<n;i++){
			printf("%d ", a[i]);
		}
	}	
}