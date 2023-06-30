#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	while(n--){
		int N;
		scanf("%d", &N);
		int can= sqrt(N);
		if(N < 2){
			printf("NO\n");
		}
		else{
			int dem=0;
			for(int t=2 ; t<=can;t++){
				if(N % t == 0){
					dem=dem+1;
				}
			}
			if( dem >= 1){
				printf("NO\n");
			}
			else{
				printf("YES\n");
			}
		}	
	}
	return 0;
}