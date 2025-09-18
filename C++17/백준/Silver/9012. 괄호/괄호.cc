#include <stdio.h>
#include <string.h>
void VPS()
{
    char PS[51];
    scanf("%s",PS);
    char stack[51];
    int top=-1;
    int len=strlen(PS);
    for(int j=0;j<len;j++)
    {
        if(PS[j]=='(')
        {
            stack[++top]='(';
        }
        else if(PS[j]==')')
        {
            if(top==-1)
            {
                printf("NO\n");
                while (j<len-1)
                {
                    j++;
                }
                return;
            }
            top--;
        }
    }
    if(top==-1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}
int main(void)
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        VPS();
    }
    return 0;
}