#include <stdio.h>
#include <string.h>
char stack[101];
void f(char a[])
{
    int fisrt=-1;
    int size=0;
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]=='.')
        {
          if(size>0)
          {
              printf("no\n");
              return;
          }
        }
        if(a[i]=='('||a[i]=='[')
        {
            size++;
            stack[fisrt++]=a[i];
        }
        else if(a[i]==')')
        {
            if(fisrt==-1||stack[fisrt-1]!='(')
            {
                printf("no\n");
                return;
            }
            size--;
            fisrt--;
        }
        else if(a[i]==']')
        {
            if(fisrt==-1||stack[fisrt-1]!='[')
            {
                printf("no\n");
                return;
            }
            size--;
            fisrt--;
        }
    }
    printf("yes\n");
    return;
}
int main(void)
{
    char a[103];
    while(1)
    {
        fgets(a,sizeof(a),stdin);
        a[strcspn(a,"\n")]=0;
        if(a[0]=='.')
        {
            break;
        }
        f(a);
    }
    return 0;
}
