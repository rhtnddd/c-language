#include <stdio.h>
int a[101][100001];
int w[101],v[101];
int main(void)
{
    int n,k;
    scanf("%d %d",&n,&k);
    for(int i=1;i<=n;i++)
    {
        scanf("%d %d",&w[i],&v[i]);
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=k;j++)
        {
            if(j<w[i])
            {
                a[i][j]=a[i-1][j];
            }
            else
            {
                int notake=a[i-1][j];
                int take=a[i-1][j-w[i]]+v[i];
                if(notake>take)
                {
                    a[i][j]=notake;
                }
                else
                {
                    a[i][j]=take;
                }
            }
        }
    }
    printf("%d\n",a[n][k]);
    return 0;
}
