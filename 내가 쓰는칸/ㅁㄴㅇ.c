#include <stdio.h>
int n[1500000]={0,1,};
int main(void)
{
    int i;
    long long int a;
    scanf("%lld",&a);
    int p=a%1500000;
    for(i=2;i<=p;i++)
    {
        n[i]=(n[i-1]+n[i-2])%1000000;
    }
    printf("%d",n[p]);
}