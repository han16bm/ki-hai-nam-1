#include<stdio.h>
#include<math.h>

int main(){
	int t;
	scanf("%d", &t);
	int kq=0;
	while(t--){
		int n;
		scanf("%d", &n);
		for(int i=2;i<=sqrt(n);i++){
			while(n%i==0){
				kq+=i;
				n=n/i;
			}
		}
		if(n!=1)	kq+=n;
	}
	printf("%d", kq);
}