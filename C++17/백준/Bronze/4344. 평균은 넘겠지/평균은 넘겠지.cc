#include <stdio.h>
int main(void)
{
    int n,m,a[100000];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&m);
        int num=0,sum=0;
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[j]);
            sum+=a[j];
        }
        for(int j=0;j<m;j++)
        {
            if((double)sum/m<a[j])
            {
                num++;
            }
        }
        printf("%.3f%%\n",((double)num / m) * 100);
    }
}