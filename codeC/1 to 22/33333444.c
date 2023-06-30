#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        int N, dem=0;
        scanf("%d", &N);
        for(int t=1;t<=N;t++){
            dem += (N % t == 0);
        }
        printf("%s\n", (dem == 2) ? "YES" : "NO");
    }
    return 0;
}
