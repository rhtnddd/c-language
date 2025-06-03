#include <stdio.h>
int main(void)
{
    int n;
    long long int num,max=0;
    int sum=0;
    scanf("%lld",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%lld",&num);
        if(num>=max)
        {
            max=num;
            sum=i;
        }
    }
    printf("%lld\n",max);
    printf("%lld\n",sum);
}