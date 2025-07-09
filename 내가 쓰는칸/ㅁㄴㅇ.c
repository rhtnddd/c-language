#include <stdio.h>
int memo[1000000];
int f(int n)
{
    if(n==1)
    {
        return 1;
    }
    if(n==2)
    {
        return 2;
    }
    else if(memo[n]==0)
    {
        return memo[n]=(f(n-1)+f(n-2))%100000007;
    }
    return memo[n];
}
int main(void)
{
    int n;
    scanf("%d",&n);
    if(n<=2)
    {
        printf("0");
    }
    else
    {
        printf("%d",f(n-1));
    }
}