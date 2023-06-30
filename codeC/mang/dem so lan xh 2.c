#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	for(int a=1;a<=t;a++){
		int n;
		scanf("%d", &n);
		int b[1000000]={0};
		int c[1000000];
		for(int i=0;i<n;i++){
			scanf("%d",&c[i]);
			b[c[i]]++;
		}
		printf("Test %d:\n",a);
		for(int i=0;i<n;i++){
			if(b[c[i]]!=0){
				printf("%d xuat hien %d lan\n",c[i],b[c[i]]);
				b[c[i]]=0;
			}
		}
	}
}