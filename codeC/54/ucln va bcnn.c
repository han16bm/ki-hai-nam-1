#include<stdio.h>

int UCLN(long long a, long long b ){
    long long r = a % b;         
    while (r!=0) {
        a = b;  
        b = r;
        r = a % b;   
    }
    return b;
}

int BCNN(long long a, long long b){
	long long c=(a*b)/(UCLN(a,b));
	return c;
}
int main(){
	long long a,b;
	scanf("%lld%lld", &a,&b);
	printf("%lld\n", UCLN(a,b));
	printf("%lld", BCNN(a,b));
	
}