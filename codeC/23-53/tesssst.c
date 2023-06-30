#include<stdio.h> 

int main() { 
	int m,n; 
	int i,j; 
	scanf("%d %d",&m,&n); 
	for(i=1;i<=m;i++) { 
		for(j=i;j<=n;j++) { 
			printf("%d",j); 
			} 
		if(i>n) { 
			printf("%d",i); 
			for(j=(i-1);j>(i-n);j--) 
			printf("%d",j); 
			} 
		else { 
			for(j=(n-1);j>(n-i);j--) 
			printf("%d",j); 
			} 
		printf("\n"); 
	} 
}