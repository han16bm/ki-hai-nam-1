#include<stdio.h>
#include<math.h>

int shh(int n){
	int sum=1;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			sum=sum+i;
			if(n/i != i){
				sum=sum+n/i;
			}
		}
	}
	return sum;
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i=2;i<n;i++){
		if(shh(i) == i ){
			printf("%d ", i);
		}
	}
	
}