#include <stdio.h>
#include <string.h>
int main(void)
{
    int n;
    int first=-1;
    int size=0;
    char s[10];
    int sum[100000];
    scanf("%d", &n);
    for (int i=0;i<n;i++)
    {
        scanf("%s",s);
        if (strcmp(s,"push")==0)
        {
            int a;
            scanf("%d",&a);
            sum[++first]=a;
            size++;
        }
        else if (strcmp(s,"pop")==0)
        {
            if (size==0)
            {
                printf("-1\n");
            }
            else
            {
                printf("%d\n",sum[first--]);
                size--;
            }
        }
        else if (strcmp(s,"size")==0)
        {
            printf("%d\n",size);
        }
        else if (strcmp(s,"empty")==0)
        {
            if (size==0)
            {
                printf("1\n");
            }
            else
            {
                printf("0\n");
            }
        }
        else if (strcmp(s,"top")==0)
        {
            if (size==0)
            {
                printf("-1\n");
            }
            else
            {
                printf("%d\n",sum[first]);
            }
        }
    }
}