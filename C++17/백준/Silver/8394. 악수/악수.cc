#include <stdio.h>
int a[61]={1,2,3,};
int main(void)
{
    int n;
    scanf("%d",&n);
    for(int i=3;i<n;i++)
    {
        a[i%61]=(a[(i-1)%61]+a[(i-2)%61])%10;
    }
    printf("%d",a[(n-1)%61]);
}