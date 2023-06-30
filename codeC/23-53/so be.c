#include<stdio.h>

int main(){
	int a, b,c;
	scanf("%d %d %d", &a, &b, &c);
	int sobe=a;
	if(sobe>=b){
		sobe=b;
	}
	if(sobe>=c){
		sobe=c;
	}
	printf("%d", sobe);
}