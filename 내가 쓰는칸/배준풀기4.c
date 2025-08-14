// 15996문제
#include <stdio.h>
int main(void)
{
    long long int n,a;
    scanf("%lld %lld",&n,&a);  
    long long int count=0;
    while(n>0)
    {
        n/=a;
        count+=n;
    }
    printf("%lld\n",count);   
    return 0;
}