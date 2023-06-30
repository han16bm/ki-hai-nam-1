#include<stdio.h>

int main(){
	char c;
	scanf("%s", &c);
	if('a'<= c <= 'z'){
		return 1;
	}
	else	return 0;
}