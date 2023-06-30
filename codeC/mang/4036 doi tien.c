#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		int a[]={1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
		scanf("%d", &n);
		int dem=0;
		int k=9;
		while(n != 0){
			if(n >= a[k]){
				n = n - a[k];
				dem++;
			}
			else{
				k--;
			}
		}
		printf("%d\n",dem);
	}
}