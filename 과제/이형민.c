#include <stdio.h>
int main(void)
{
    int a=0,b=1;
    int sum=0;
    int n;
    int temp;
    scanf("%d",&n);
    while(b<=n)
    {
        sum+=b;
        temp=a;
        a=b;
        b+=temp;
    }
    printf("%d\n",sum);
}