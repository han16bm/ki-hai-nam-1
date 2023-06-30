#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int check(char c[]){
	int l=0,r=strlen(c)-1;
	for(int i=0;i<strlen(c);i++){
		if(c[l] != c[r])	return 0;
		if(c[i] -'0' != 2 && c[i]-'0'!=3 && c[i]-'0'!= 5 && c[i]-'0'!= 7 )	return 0;
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
		if(check(c))	printf("YES\n");
		else 	printf("NO\n");
	}
}