#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char c[1000];
	gets(c);
	char a[1000][1000];
	char *token=strtok(c, " ");
	long long n=0;
	while( token != NULL){
		int cnt=1;
		for(int i=0;i<n;i++){
			if(strcmp(a[i], token)==0)	cnt=0;
		}
		if(cnt==1){
			strcpy(a[n], token);
		}
		++n;
		token=strtok(NULL, " ");
	}
	for(int i=0;i<n;i++){
		printf("%s ",a[i]);
	}
}