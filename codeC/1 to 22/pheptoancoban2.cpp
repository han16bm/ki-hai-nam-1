#include<stdio.h>

int main(){
	long long a,b;
	scanf("%ld%ld", &a, &b);
	if(a>0 && b>0)
	printf("%ld\n", a+b);
	printf("%ld\n", a-b);
	printf("%ld\n", a*b);
	printf("%ld\n", a/b);
	printf("%ld\n", a%b);
	float c = a;
	float d = b;
	printf("%.2f\n", c/d);
	return 0;	
}