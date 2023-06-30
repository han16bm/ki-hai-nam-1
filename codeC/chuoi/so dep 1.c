#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int sc(char c[]){
	for(int i=0;i<strlen(c)-1;i++){
		if(c[i]%2==1){
			return 0;
		}
	}
	return 1;
}
int tn(char c[]){
	int l=0,r=strlen(c)-1;
	for(int i=0;i<strlen(c)-1;i++){
		if(c[l] != c[r]){
			return 0;
		}
		++l;
		--r;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char c[1000];
		scanf("%s", c);
		if(sc(c) && tn(c))	printf("YES\n");
		else	printf("NO\n");
	}
	
}