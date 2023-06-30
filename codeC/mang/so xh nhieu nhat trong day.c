#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a[10000];
		int b[10000]={0};
		int n;
		scanf("%d", &n);
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
			b[a[i]]++;
		}
		int max=0;
		for(int i=0;i<n;i++){
			if(b[a[i]] >= max){
				max=b[a[i]];
			}
		}

		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(a[i]==a[j] && b[a[i]] == max){
					a[j]=a[j]+1;
				}
			}
		}
		for(int i=0;i<n;i++){
			if(b[a[i]] == max){
				printf("%d ",a[i]);  				
			}
		}
	}
}