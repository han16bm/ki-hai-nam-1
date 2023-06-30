#include<stdio.h>
#include<math.h>

int snt(int n){
	int dem=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	if(n>1)		return 1;
	return 0;
}
int tn(int n){
	int a=n;
	int b=0;
	while(a>0){
		b=b*10+a%10;
		a=a/10;
	}
	if(b==n)	return 1;
	return 0;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a,b;
		int dem =0;
		scanf("%d %d", &a, &b);
		for(int i=a;i<= b;i++){
			if(dem==10){
				printf("\n");
				dem=0;
			}
			if(snt(i) && tn(i)){
				printf("%d ", i);
				dem++;
			}
		}
		printf("\n");
		printf("\n");
	}	
}