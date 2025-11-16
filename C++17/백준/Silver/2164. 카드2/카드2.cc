#include <stdio.h>
int n;
int first=0;
int end=0;
int card[1000001];
int main(void)
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        card[end++]=i;
    }
    for(int i=0;i<n-1;i++)
    {
        first++;
        card[end++]=card[first++];
    }
    printf("%d",card[first]);
}