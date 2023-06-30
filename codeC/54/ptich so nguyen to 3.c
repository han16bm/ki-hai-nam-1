#include<stdio.h>
#include<math.h>

void ptich(long long n){
	for(int i=2;i<=sqrt(n);i++){
		long long dem=0;
		if(n%i==0){
			while(n%i==0){
				dem+=1;
				n=n/i;
			}
			printf("%d(%d) ", i,dem);
		}
	}
	if(n!=1){
		printf("%d(%d)",n,1);	
	}
	printf("\n");
}
int main(){
	int t;
	scanf("%d", &t);
	for(int i=1;i<=t;i++){
		long long n;
		scanf("%lld", &n);
		printf("Test %d: ",i);
		ptich(n);
	}
	return 0;
}