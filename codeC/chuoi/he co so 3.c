#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int check(char c[]){
	for(int i=0;i<strlen(c);i++){
		if(c[i] != '0' && c[i] != '1' && c[i] != '2')	return 0;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char c[20];
		scanf("%s", c);
		if(check(c))		printf("YES\n");
		else 	printf("NO\n");
	}		
}