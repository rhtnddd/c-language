#include <stdio.h>
int main(void)
{
    long long int n,m;
    scanf("%lld %lld",&n,&m);
    if((n-m)>=0)
    {
        printf("%lld",n-m);
    }
    else
    {
        printf("%lld",-1*(n-m));
    }
    return 0;
}