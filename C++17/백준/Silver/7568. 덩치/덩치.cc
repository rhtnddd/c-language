#include <stdio.h>
int main(void)
{
    int n;
    int a[100][2];
    int key[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&a[i][0],&a[i][1]);
        key[i]=1;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][0]<a[j][0]&&a[i][1]<a[j][1])
            {
                key[i]++;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",key[i]);
    }
}