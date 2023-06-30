#include<stdio.h>
int sdx(int a[],int n){
	for(int i=0;i<n/2;i++){
		if(a[i]!=a[n-i-1])
			return 0;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d\n", &t);
	while(t--){
		int n;
		scanf("%d\n",&n);
		int a[100];
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
		}
		if(sdx(a,n)==0){
			printf("NO\n");
		}
		else	printf("YES\n");
	}
}