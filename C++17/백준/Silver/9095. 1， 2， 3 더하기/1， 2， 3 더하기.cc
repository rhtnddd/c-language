#include <stdio.h>
int main(void)
{
    int m[20];
    int a[10][13];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        a[i][0]=0;
        a[i][1]=1;
        a[i][2]=1;
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&m[i]);
        if(m[i]==0)
        {
            printf("0\n");
        }
        for(int j=3;j<=m[i]+1;j++)
        {
            a[i][j]=a[i][j-1]+a[i][j-2]+a[i][j-3];
        }
        printf("%d\n",a[i][m[i]+1]);
    }
    return 0;
}