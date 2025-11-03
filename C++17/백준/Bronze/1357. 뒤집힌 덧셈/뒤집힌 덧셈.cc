#include <stdio.h>
int rev(int n){
    int r=0;
    while(n>0){
        r=r*10+n%10;
        n/=10;
    }
    return r;
}
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%d",rev(rev(x)+rev(y)));
    return 0;
}
