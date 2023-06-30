#include<stdio.h>
#include<math.h>

int main(){	
	int m,n;
	scanf("%d%d", &m, &n);
	int canm=sqrt(m);
	float h=(float)sqrt(m);
	int cann=sqrt(n);
	if( h*h > canm*canm){
		canm = canm+1;
	}
	int socp= cann - canm +1;
	printf("%d\n", socp);
	for(int i=canm;i<=cann;i++){
		int a=i*i;
		printf("%d\n", a);
	}
}