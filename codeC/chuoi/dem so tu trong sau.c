#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char c[1000];
		fgets(c, 1000, stdin);
		c[strlen(c)-1]='\0';
		long long dem=0;
		char *token=strtok(c," ");
		while(token != NULL){
			dem=dem+1;
			token=strtok(NULL, " ");
		}
		printf("%d\n", dem);
	}
}