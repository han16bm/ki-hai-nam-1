#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[1000];
	int b[1000]={0};
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	int cnt=0;
	int p=0;
	int c[1000];
	for(int i=0;i<n;i++){
		int d=0;
		for(int j=0;j<n;j++){
			if(a[i]==a[j]){
				d++;
			}
		}
		if(d==1){
			cnt++;
			c[i]=a[i];
			if(c[i]==0){
				p=1;	
			}
		}
	}
	printf("%d\n", cnt);
	for(int i=0;i<n;i++){
		if(c[i]!=0){
			printf("%d ",c[i] );
		}
		if(p==1){
			printf("0 ");
			p=0;
		}
	}
}