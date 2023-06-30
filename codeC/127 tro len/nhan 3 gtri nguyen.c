#include<stdio.h>
#include<math.h>
int main(){
	int m,n,p,q;
	scanf("%d%d%d%d", &m,&n,&p,&q);
	int a[m][n],b[n][p],c[p][q];
	int mtt[m][p];
	int mtt2[m][q];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d", &a[i][j]);
		}	
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<p;j++){
			scanf("%d", &b[i][j]);
		}
	}
	for(int i=0;i<p;i++){
		for(int j=0;j<q;j++){
			scanf("%d", &c[i][j]);
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<p;j++){
			mtt[i][j]=0;
			for(int k=0;k<n;k++){
				mtt[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<q;j++){
			mtt2[i][j]=0;
			for(int k=0;k<p;k++){
				mtt2[i][j]+=mtt[i][k]*c[k][j];
			}
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<q;j++){
			printf("%d ",mtt2[i][j]);
		}
		printf("\n");
	}
}