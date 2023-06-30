#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

struct SV{
	int msv;
	char ten[1000];
	float dA,dB,dC,sum;
};

typedef struct SV SV;

int cmp(const void *x, const void *y){
	SV *a = (SV*)x;
	SV *b = (SV*)y;
	if(a->sum < b->sum) 	return -1;
	return 1;
}

SV x[1000];
int n=0;
int cnt=0;
void task1(){
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		++cnt;
		gets(x[i].ten);
		scanf("%f %f %f", &x[i].dA, &x[i].dB, &x[i].dC);
		x[i].sum = x[i].dA + x[i].dB + x[i].dC;
		x[i].msv=i;
	}
	printf("%d\n", n);
}
void task2(){
	int msv;
	scanf("%d", &msv);
	gets(x[msv].ten);
	scanf("%f %f %f", &x[msv].dA, &x[msv].dB, &x[msv].dC);
	x[msv].sum= x[msv].dA + x[msv].dB + x[msv].dC;
}
void task3(){
	qsort(x, cnt, sizeof(SV), cmp );
	for(int i=1;i<=n;i++){
		printf("%d %s %.1lf %.1lf %.1lf\n", x[i].msv, x[i].ten, x[i].dA, x[i].dB, x[i].dC);
	}
}
int main(){
	
	int t;
	while(scanf("%lld", &t) != -1){
		getchar();
		if(t==1){
			task1();
		}
		else if(t==2){
			task2();
		}
		else task3();
	}
}