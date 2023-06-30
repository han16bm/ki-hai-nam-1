#include<stdio.h>

int main(){
	long long n;
	scanf("%lld", &n);
	int a[10]={0};
	while(n!=0){
		int x=n%10;
		if(x==2 || x==3 || x==5 || x==7){
			a[x]++;
		}
		n=n/10;
	}
	for(int i=0;i<10;i++){
		if(a[i]>0){
			printf("%d %d\n",i,a[i]);
		}
		
	}
}