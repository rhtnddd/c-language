#include <stdio.h>
int main(void)
{
    int a,b,c;
    int sum=1;
    int sum_c[10]={0};
    scanf("%d %d %d",&a,&b,&c);
    sum=a*b*c;
    int i=0;
    while (sum)
    {   
        printf("%d",sum%10);
        sum_c[sum%10]+=1;
        sum/=10;
        i++;
    }
    printf("\n");
    for(int j=0;j<10;j++)
    {
        printf("%d \n",sum_c[j]);
    }
}