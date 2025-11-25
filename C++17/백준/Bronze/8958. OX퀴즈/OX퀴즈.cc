#include <stdio.h>
#include <string.h>
int main(void)
{
    int n;
    int num=0;
    scanf("%d",&n);
    int sum[1000]={0};
    char a[n][81];
    for(int i=0;i<n;i++)
    {
        scanf("%s",a[i]);
    }
    int l;
    for(int i=0;i<n;i++)
    {
        num=0;
        l=strlen(a[i]);
        for(int j=0;j<l;j++)
        {
            if(a[i][j]=='O')
            {
                num++;
                sum[i]+=num;
            }
            else if(a[i][j]=='X')
            {
                num=0;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\n",sum[i]);
    }
}