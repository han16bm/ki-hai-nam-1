#include<stdio.h>

int main(){
	int n,m;
	scanf("%d%d", &n, &m);	
	for(int i=1;i<=n;i++){
		if(n>=m){
			int init=n;
			for(int j=1;j<=m;j++){
				if(i>j)
				printf("%c", 96+init--);
				else
				printf("%c", 96+n+1-i);
			}
		}
		else{
			int init=m;
			for(int j=1;j<=m;j++){
				if(i>j)
				printf("%c", 96+init--);
				else
				printf("%c", 96+m+1-i);
			}
		
		}
		printf("\n");
	}	
}