#include <stdio.h> 
#include <string.h> 
#include <stdio.h> 
#include <ctype.h> 

int check(char c[]){ 
	if(strlen(c)%2!=0){ return 0; } 
	for(int i=0;i<strlen(c);i++){ 
		if( c[i]=='(' ){ c[i]= ')' ; } 
		if( c[i]=='[' ){ c[i]= ']' ; } 
		if( c[i]=='{' ){ c[i]= '}' ; }
	} 
	for(int i=0;i<=(strlen(c)-1)/2;i++){ 
		
		if(c[i]!=c[strlen(c)-i-1]){ return 0; } 
	} 
	return 1; 
} 
int main(){ 
	char c[1000]; 
	scanf("%s",c); 
	if(check(c)==1){ printf("1\n"); } 
	else printf("0\n"); 
}