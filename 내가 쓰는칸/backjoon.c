#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    long long int temp,a=0,b=1;
    for(int i=0;i<n;i++)
    {
        temp =a+b;
        a=b;
        b=temp;
    }
    printf("%lld",(a+b)*2);
}