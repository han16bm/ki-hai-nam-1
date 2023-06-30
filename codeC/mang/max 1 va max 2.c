#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[1000];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	int l1=0,l2=0;
	for(int i=0;i<n;i++){
		if(a[i]>=l1){
			l1=a[i];
		}	
	}
	for(int i=0;i<n;i++){
		if(a[i]<l1 && a[i]>l2){
			l2=a[i];
		}	
	}
	printf("%d %d",l1,l2);
}