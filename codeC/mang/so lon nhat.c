#include<stdio.h>

int main(){
	int t;
	scanf("%d\n", &t);
	while(t--){
		int n;
		scanf("%d\n", &n);
		int a[n+5];	
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
		}
		int max=0;
		for(int i=0;i<n;i++){
			if(a[i]>=max){
				max=a[i];
			}
		}
		printf("%d\n", max);
		for(int i=0;i<n;i++){
			if(a[i]==max){
				printf("%d ", i+1);
			}
		}
		printf("\n");	
	}
}