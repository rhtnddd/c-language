#include <stdio.h>
int main(void)
{
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=n;i<=m;i++)
    {
        printf("%d ",i);
    }
}
#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
    }
}
#include <stdio.h>
int main(void)
{
    int n,m;
    int sum=0;
    scanf("%d %d",&n,&m);
    for(int i=n;i<=m;i++)
    {
        if(i%2!=0)
        {
            sum+=i;
        }
    }
    printf("%d",sum);
}
#include <stdio.h>
int main(void)
{
    int n;
    int sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i*=10)
    {
        sum++;
    }
    if(sum==0)
    {
        sum++;
    }
    printf("%d",sum);
}
#include <stdio.h>
int main(void)
{
    int a=1,b=2;
    a=a+b;
    b=a-b;
    a-=b;
    printf("%d %d",a,b);
}