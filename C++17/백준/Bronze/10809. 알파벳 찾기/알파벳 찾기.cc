#include <stdio.h>
int main(void)
{
    char a[101];
    scanf("%s",a);
    int j=0,b[26];
    for(int i=0;i<26;i++)
    {
        b[i]=-1;
    }
    int n=0;
    while(a[j]!='\0'){
        j++;
    }   
    for(int i=0;i<j;i++)
    {
        n=a[i]-'a';
        if(b[n]==-1)
        {
            b[n]=i;
        }
    }
    for(int i=0;i<26;i++)
    {
        printf("%d ",b[i]);
    }
}