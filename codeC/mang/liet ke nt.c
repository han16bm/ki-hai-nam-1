#include<stdio.h>
#include<math.h>

int checknt(int m){
	if(m<2) return 0;
	for(int i=2;i<=sqrt(m);i++){
		if(m%i==0)	return 0;
	}
	return 1;
}
 int main(){
 	int n;
 	scanf("%d", &n);
 	int a[1000];
 	for(int i=0;i<n;i++){
 		scanf("%d", &a[i]);
	}
	int dem=0;
	for(int i=0;i<n;i++){
 		if(checknt(a[i])==1) 	dem++;
	}
	printf("%d ",dem);
	for(int i=0;i<n;i++){
 		if(checknt(a[i])==1){
 			printf("%d ",a[i]);
		 }
	}
 }