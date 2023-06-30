#include<stdio.h>
#include<math.h>

int checknt(int m){
	if(m<2){
		return 0;
	}
	for(int k=2;k<=sqrt(m);k++){
		if(m%k==0)	return 0;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	for(int a=1;a<=t;a++){
		int n;
		scanf("%d", &n);
		int b[100000]={0};
		int c[100000];
		
		for(int i=0;i<n;i++){
			scanf("%d",&c[i]);
		}
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(c[i]>c[j]){
					int tmp = c[i];
                	c[i] = c[j];
                	c[j] = tmp;
				}
			}
		}
		for(int i=0;i<n;i++){
			b[c[i]]++;
		}
		printf("Test %d:\n",a);
		for(int i=0;i<n;i++){
			if(b[c[i]]!=0 && checknt(c[i])){
				printf("%d xuat hien %d lan\n",c[i],b[c[i]]);
				b[c[i]]=0;
			}
		}
	}
}