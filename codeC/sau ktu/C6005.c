#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>

void lower(char c[]){
	for(int i=0;i<strlen(c);i++){
		c[i] = tolower(c[i]);
	}
}
int main(){
	char c[10000];
	gets(c);
	lower(c);
	char a[1000][1000];
	char *token=strtok(c, " ");
	int n=0;
	int d[1000]={1};
	while(token != NULL){
		strcpy(a[n], token);
		n++;
		token=strtok(NULL, " ");
		d[n]++;
	}
	for(int i=0;i<n;i++){	
		for(int j=i+1;j<n;j++){
			if(d[j] != 0){
			
				if(strcmp(a[i], a[j]) == 0){
					d[i]++;
					d[j]=0;
				}
			}
		}
	}
	for(int i=0;i<n;i++){
		if(d[i] > 0){
			printf("%s %d\n", a[i], d[i]);
		}
	}
}