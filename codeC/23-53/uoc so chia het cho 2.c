#include<stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	while(a--){
		int N;
		scanf("%d", &N);
		int dem =0;
		int i=1;
		while(i<=N/i){
			if(N%i==0){
				if(i%2==0)
				dem++;
				if(N/i%2==0)
				dem++;
				if(N/i==i && i%2==0)
				dem--;
			}
			i++;
		}
		printf("%d\n", dem);
	}
	return 0;
}