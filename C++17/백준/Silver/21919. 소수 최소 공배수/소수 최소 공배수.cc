#include <stdio.h>
int a[1000001];
int used[1000001];
int main(void)
{
    int n,m[10001];
    long long int sum=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&m[i]);
    }
    for(int i=2;i*i<=1000000;i++)
    {
        if(!a[i])
        {
            for(int j=i*i;j<=1000000;j+=i)
            {
                a[j]=1; 
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(!a[m[i]]&&!used[m[i]])
        {
            sum*=m[i];
            used[m[i]]=1;
        }
    }
    if(sum!=1)
    {
        printf("%lld\n",sum);
    }
    else
    {
        printf("-1");
    }
    return 0;
}