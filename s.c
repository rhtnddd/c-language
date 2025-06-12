#include <stdio.h>
int main(void)
{
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a-i;j++)
        {
            printf(" ");
        }
        for(int in=0;in<i*2-1;in++)
        {
            printf("*");
        }
        printf("\n");
    }
      for(int i=a;i>0;i--)
    {
        for(int j=0;j<a-i;j++)
        {
            printf(" ");
        }
        for(int in=0;in<i*2-1;in++)
        {
            printf("*");
        }
        printf("\n");
    }
}