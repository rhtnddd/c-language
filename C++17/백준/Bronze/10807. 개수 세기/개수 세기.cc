#include <stdio.h>
int main(void)
{
    int n,m;
    int a[101];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    int num=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==m)
        {
            num++;
        }
    }
    printf("%d",num);
    return 0;
}