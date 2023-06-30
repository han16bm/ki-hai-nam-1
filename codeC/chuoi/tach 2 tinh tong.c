#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char c[1000];
	scanf("%s", c);
	int t=strlen(c);
	if(t==1){
		printf("%c",c);
	}
	
		char a[1000],b[1000];
		int n=0,m=0;
		for(int i=0;i<t/2;i++){
			a[n]=c[i];
			n++;
		}
		for(int i=t/2;i<t;i++){
			b[m]=c[i];
			m++;
		}
		n--;
		m--;
		
		for(int i=0;i<t;i++){
			c[i]=a[i]+b[i]-'0';
		}
		printf("%s\n", c);
	
}