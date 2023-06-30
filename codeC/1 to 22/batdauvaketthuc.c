#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i =1; i<=n;i++){
		int a;
		scanf("%d", &a);
		if(a >=10)
		int socuoi = a % 10;			
		while( a>=10){
			a=a/10;
		}
		int sodau=a;			
		if( sodau == socuoi){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}