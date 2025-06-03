/*#include <stdio.h>
int main(void)
{
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a;j++)
        {
            printf("%d ",i*j);
        }
        printf("\n");
    }
}*/
#include <stdio.h>
int main(void)
{
    int n;
    int a[4];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<4;j++)
        {
            scanf("%d",&a[j]);
        }
    }
}
