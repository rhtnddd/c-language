#include <stdio.h>
int is_leap(int y)
{
    return (y%400==0)||(y%4==0&&y%100!=0);
}
int mdays[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
long long days(int y,int m,int d)
{
    long long res=0;
    for(int i=1;i<y;i++) res+=365+is_leap(i);
    for(int i=1;i<m;i++) res+=mdays[i]+(i==2&&is_leap(y));
    return res+d;
}
int main()
{
    int y1,m1,d1,y2,m2,d2;
    scanf("%d %d %d",&y1,&m1,&d1);
    scanf("%d %d %d",&y2,&m2,&d2);
    if(y2-y1>1000||(y2-y1==1000&&(m2>m1||(m2==m1&&d2>=d1))))
    {
        printf("gg");return 0;
    }
    printf("D-%lld",days(y2,m2,d2)-days(y1,m1,d1));
}
