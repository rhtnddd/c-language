#include <stdio.h>
int main(void)
{
    int a,sum=0;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        sum+=i;
    }
    printf("%d",sum);
}