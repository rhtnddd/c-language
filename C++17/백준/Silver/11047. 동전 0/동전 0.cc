#include <stdio.h>
int main(void)
{
    int coin[11];
    int n;
    int money;
    int sum=0;
    scanf("%d %d",&n,&money);
    for(int i=n-1;i>=0;i--)
    {
        scanf("%d",&coin[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum+=money/coin[i];
        money%=coin[i];
    }
    printf("%d",sum);
}