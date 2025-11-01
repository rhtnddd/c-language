#include <stdio.h>

int main(void){
    int N;
    if(scanf("%d",&N)!=1) return 0;
    int start = N - 63;
    if(start < 1) start = 1;
    for(int i = start; i < N; i++){
        int sum = i, t = i;
        while(t){
            sum += t % 10;
            t /= 10;
        }
        if(sum == N){
            printf("%d\n", i);
            return 0;
        }
    }
    printf("0\n");
    return 0;
}
