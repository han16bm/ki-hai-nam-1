#include<stdio.h>

int main(){
	int n,m;
	scanf("%d%d", &n, &m);
	for( int i=1; i<=n;i++){
		printf("%d", i);
		int a=1;
		for(int j=1;j<m;j++){	
			if(i<m){
				if(i+j<=m)
				printf("%d", i+j);
				else if((i+j)%m==0)
				printf("%d", m);
				else	
				printf("%d", (i+j)%m);
			}
			else{	
				printf("%d", i-a);
			} 
			a=a+1;  
		}
		printf("\n");
	}
}