#include<stdio.h>
#include<string.h>

int main(){
	char c[10000];
	fgets(c,10000,stdin);
	c[strlen(c)-1]='\0';
	long long kitu=0,so=0,ktk=0;
	for(int i=0;i<strlen(c);i++){
		if(65 <=c[i] && c[i]<=90 || 97<=c[i]&& c[i]<=122){
			kitu++;
		}	
		else if(48<=c[i] && c[i]<=57){
			so++;
		}
		else	ktk++;
	}
	printf("%lld %lld %lld",kitu, so, ktk);	
}