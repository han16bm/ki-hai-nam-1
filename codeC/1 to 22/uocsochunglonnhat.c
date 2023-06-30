#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	while(n--){
		int a,b,du;
		scanf("%d%d", &a, &b);
		if(a>0 && b>0)
		while(b != 0){
			du= a%b;
			a=b;
			b=du;
		}
		printf("%d\n", a);
	}
	return 0;
}