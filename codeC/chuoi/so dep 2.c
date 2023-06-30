#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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
int dk2(char c[]){
	int sum =0;
	for(int i=0;i<strlen(c);i++){
		sum+=c[i]-'0';
		if(c[0] -'0' != 8 || c[strlen(c)-1]-'0' != 8)	return 0;
	}
	if(sum % 10 != 0)	return 0;
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char c[1000];
		scanf("%s", c);
		if( tn(c) && dk2(c))	printf("YES\n");
		else	printf("NO\n");
	}
	
}