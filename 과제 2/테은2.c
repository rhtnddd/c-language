/*#include <stdio.h>
int main(void)
{
    int a,i=1,sum=1;
    scanf("%d",&a);
    while(1){
        sum*=i;
        if(sum==a)
        {
            printf("%d\n",i);
            break;
        }
        i++;
    }
    return 0;
}*/
#include <stdio.h>
int main(void)
{
    char a[101];
    scanf("%s",a);
    for(int i=0;a[i]!='\0';i++)
    {
        a[i]=a[i]-1;
    }
    printf("%s",a);
}
/*#include <stdio.h>
int main(void)
{
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        for(int j=a-i;j>0;j--)
        {
            printf("%d",j);
        }
    }
}*/