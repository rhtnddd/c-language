#include <stdio.h>
int main(void)
{
    long long int a,b,c;
    scanf("%lld %lld %lld",&a,&b,&c);
    if((a+b)%c==0)
    {
        printf("yes");
    }
    else{
        printf("no");
    }
}