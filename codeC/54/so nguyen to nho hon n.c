#include<stdio.h>
#include<math.h>

int snt(int n){
	if(n<2){
		return 0;
	}
	for(int i=2;i<=sqrt(n);i++){
		printf("%d", i);
		if(n%i==0){
			return 0;
		}		
	}
	return 1;
}

int main(){
	int a;
	scanf("%d",&a);
	for(int j=2;a>0;j++){
		if(snt(j)==1){
			printf("%d\n", j);
			a--;
		}
		
	}
}