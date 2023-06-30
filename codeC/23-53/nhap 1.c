#include<stdio.h>

int main(){
	int cd,cr;
	scanf("%d%d", &cd, &cr);
	for(int i=0; i< cr; i++){
		for(int j=0; j<cd; j++){
			if(i == 0 || i==cr-1 || j ==0 || j == cd-1 ){
				printf("*");
			}	else{
				printf(" ");
			}			
		}
		printf("\n");
	}
	return 0;
}