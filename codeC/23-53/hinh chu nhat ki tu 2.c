#include<stdio.h>

int main(){
	int n,m;
	scanf("%d%d", &n, &m);	
	for(int i=1;i<=n;i++){
		int c=m;
		for(int j=1;j<=m;j++){
			if(i<=m){
				if(i+j-1<=m)
				printf("%c",64+i+j-1);
				else	printf("%c", 64+m-j+1);
			}
			else{
				printf("%c", 64+c--);
			}
		}
		printf("\n");
	}	
}