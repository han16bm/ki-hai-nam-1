#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int i=0,chan=0,le=0;
		char ktu=' ';
		while(ktu != '\n'){
			int a;
			scanf("%d",&a);
			if(a%2==0)	chan++;
			else 	le++;
			i++;
			ktu= getchar();
		}
		if(	i % 2 == 0 && chan > le)	printf("YES\n");
		else if(i % 2 == 1 && chan < le)	printf("YES\n");
		else	printf("NO\n");
	}
}