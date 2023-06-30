#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	for(int v=1;v<=t;v++){
		
		int n;
		scanf("%d", &n);
		int a[n],b[n];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(int i=0;i<n;i++){
			scanf("%d",&b[i]);
		}
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(a[i]>a[j]){
					int tmp=a[i];
					a[i]=a[j];
					a[j]=tmp;
				}	
			}
		}
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(b[i]<b[j]){
					int tmp=b[i];
					b[i]=b[j];
					b[j]=tmp;
				}	
			}
		}
		printf("Test %d:\n",v);
		int h=0,k=0;
		int c[n*2];
		for(int i=0;i<n*2;i++){
			if(i%2==0){
				c[i]=a[h];
				h++;
			}
			if(i%2==1){
				c[i]=b[k];
				k++;
			}
		}
		for(int i=0;i<n*2;i++){
			printf("%d ", c[i]);
		}
		printf("\n");
	}
}