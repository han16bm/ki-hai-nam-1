#include<stdio.h>
#include<math.h>

long long max(long long x,long long y){
	if(x>y)		return x;
	else	return y;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		long long a[100000];
		long long s1=0,s2=0;
		for(int i=0;i<n;i++){
			scanf("%lld",&a[i]);
		}
		for(int i=0;i<n;i++){
			s1=s1+a[i];
			s2=max(s1,s2);
			if(s1<0)	s1=0;
		}
		printf("%lld\n", s2);
	}
}