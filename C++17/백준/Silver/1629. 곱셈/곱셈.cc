#include <stdio.h>
int main(void)
{
    long long int a,b,c;
    int sum=1;
    scanf("%lld %lld %lld",&a,&b,&c);
    while(b>0)
    {
        if(b%2==1)
        {
            sum=(sum*a)%c;
        }
        b/=2;
        a=(a*a)%c;
    }
    printf("%d\n",sum);
    return 0;
}