#include<stdio.h>
#include<math.h>

int sumuoc(int n){
	if(n==1)	return 0;
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
	int a,b;
	scanf("%d %d", &a, &b);
	int temp;
	if(a>b){
		temp=a;
		a=b;
		b=temp;
	}
	for(int i=a;i<=b;i++){
		if(sumuoc(i)==i){
			printf("%d ", i);
		}
	}
	return 0;	
}