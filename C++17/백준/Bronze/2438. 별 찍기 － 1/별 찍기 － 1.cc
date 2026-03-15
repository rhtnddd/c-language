#include <stdio.h>
int main(void)
{  
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        for(int in=1;in<=i;in++)
        {
            printf("*");
        }
        printf("\n");
    }
}