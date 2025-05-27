#include <stdio.h>
int main(void)
{
    int a;
    int b=1;
    int sum=0,num;
    scanf("%d",&a);
    while(a>=1)
    {
        num=a%2;
        sum+=num*b;
        a=a/2;
        b=b*10;
    }
    printf("%d",sum);
}