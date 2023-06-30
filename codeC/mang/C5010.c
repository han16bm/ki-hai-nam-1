#include<stdio.h>
#include<math.h>

int cnt(int x){
	if(x<2)	return 0;
	for(int i=2;i<=sqrt(x);i++){
		if(x % i ==0)	return 0;
	}
	return 1;
}

int main(){
	int n;
	scanf("%d", &n);
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d", &a[i][j]);
		}
	}
	int sum=0;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if( cnt(a[i][j]) == 1){
				sum += a[i][j];
			}
		}
	}
	printf("%d",sum);
}