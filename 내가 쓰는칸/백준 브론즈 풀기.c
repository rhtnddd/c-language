#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    int a[100001];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int stack[100001];
    int first=-1;
    int count=0;
    for(int i=n-1;i>=0;i--){
        if(first==-1||a[i]>stack[first])
        {
            stack[++first]=a[i];
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}