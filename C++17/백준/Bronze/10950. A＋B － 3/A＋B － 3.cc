#include <stdio.h>
int main(void)
{
    int a[100][100]={0};
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&a[i][0],&a[i][1]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i][0]+a[i][1]);
    }
}