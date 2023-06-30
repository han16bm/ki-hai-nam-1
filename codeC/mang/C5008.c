#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	for(int l=1;l<=t;l++){
		int m,n;
		scanf("%d%d", &m, &n);
		int k[m][n];
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				scanf("%d", &k[i][j]);
			}	
		}
		int res=0,hang,cot;
		for(int i=0;i<m;i++){
			int sum=0;
			for(int j=0;j<n;j++){
				sum=sum+k[i][j];
			}
			if(sum>res){
				res=sum;
				hang=i;
			}
		}
		res=0;
		for(int i=0;i<n;i++){
			int sum=0;
			for(int j=0;j<m;j++){
				if(j != hang) 	sum=sum+k[j][i];
			}
			if(sum>res){
				res=sum;
				cot=i;
			}
				
		}
		printf("Test %d:\n",l);
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				if( i != hang && j != cot){
					printf("%d ",k[i][j]);
				}
			}
			printf("\n");
		}
		printf("\n");
	}
}