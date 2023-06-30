#include<stdio.h>

int main(){
	int n,m;
	scanf("%d%d", &n, &m);	
	for(int i=n;i>=1;i--){
		
		for(int j=1;j<=m;j++){
			
				if(i+j-1<=m)
				printf("%c",64+i+j-1);
				else	printf("%c", 64+m);
			
			
		}
		printf("\n");
	}	
}