#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    int mid=n/2;
    int middown=1;
    for(int j=0;j<n;j++)
    {
        printf("*");
    }
    printf("\n");
    for(int i=1;i<=n-2;i++)
    {
        printf("*");
        if(i<n/2)
        {
            for(int j=1;j<i;j++)
            {
                printf(" ");
            }
        }
        else
        {
            for(int j=n/2;j>middown;j--)
            {
                printf(" ");
            }
        }
        if(n/2!=i)
        {
            printf("*");
        }
        if(i<n/2)
        {
            for(int j=1;j<=n-mid;j++)
            {
                printf(" ");
            }
            mid+=2;
        }
        else
        {
            for(int j=1;j<=n-mid;j++)
            {
                printf(" ");
            }
            mid-=2;
        }
        printf("*");
        if(i<n/2)
        {
            for(int j=1;j<i;j++)
            {
                printf(" ");
            }
        }
        else
        {
            for(int j=n/2;j>middown;j--)
            {
                printf(" ");
            }
            middown++;
        }
        printf("*");
        printf("\n");
    }
    for(int j=0;j<n;j++)
    {
        printf("*");
    }
}