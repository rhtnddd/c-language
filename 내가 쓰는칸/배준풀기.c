#include <stdio.h>
int main(void)
{
    int e,s,m;
    int sum=1;
    scanf("%d %d %d",&e,&s,&m);
    int ee=1,ss=1,mm=1;
    while(!(ee==e&&ss==s&&mm==m))
    {
        ee++;
        ss++;
        mm++;
        sum++;
        if(ee>15)
        {
            ee=1;
        }
        if(ss>28)
        {
            ss=1;
        }
        if(mm>19)
        {
            mm=1;
        }
    }
    printf("%d",sum);
}