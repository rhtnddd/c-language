#include<stdio.h>
int main(void)
{
    int n;
    int sum=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum*=i;
    }
    printf("%d",sum);
}