#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[1000];
	int b[1000]={0};
	int c[1000]={0};
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
		b[a[i]]++;
		c[a[i]]++;
	}
	int d=0;
	for(int i=0;i<n;i++){
		if(b[a[i]]>1){
			d++;
		}
		b[a[i]]=0;
	}
	printf("%d\n",d);
	for(int i=0;i<n;i++){
		if(c[a[i]]>1){
			printf("%d ",a[i]);
		}
		c[a[i]]=0;
	}
}