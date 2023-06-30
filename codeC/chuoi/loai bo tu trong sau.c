#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char c[1000];
	char d[1000];
	gets(c);
	scanf("%s", d);
	long long n=0;
	char a[1000][1000];
	char *token=strtok(c, " ");
	while(token != NULL){
		strcpy(a[n],token);
		++n;
		token=strtok(NULL, " ");
	}
	for(int i=0;i<n;i++){
		if(strcmp(a[i], d) == 0){
			printf(" ");
		}
		else printf("%s ",a[i]);
	}
	
}