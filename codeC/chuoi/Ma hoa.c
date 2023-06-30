#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char c[100];
		scanf("%s",c);
		int cnt=0;
		for(int i=0;i<strlen(c);i++){
			cnt++;
			if(c[i]!=c[i+1]){
				printf("%c%d",c[i],cnt);
				cnt=0;
			}
		}
		if(cnt!=0){
			printf("%c%d",c[strlen(c)-1],cnt);
		}
		printf("\n");
	}
}