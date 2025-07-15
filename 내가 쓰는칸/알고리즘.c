#include <stdio.h>
int main(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    int n[101][101]={0};
    int nx=0,ny=0, d = 0;
    int x[4]={0,1,0,-1},y[4]={1,0,-1,0};
    for(int i=1;i<=a*b;i++)
    {
        n[nx][ny]=i;
        if(nx+x[d%4]>=a||ny+y[d%4]>=b||nx+x[d%4]<0||ny+y[d%4]<0||n[nx+x[d%4]][ny+y[d%4]]!=0)
        {
            d++;
        }
        nx+=x[d%4];
        ny+=y[d%4];
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            printf("%d ",n[i][j]);
        }
        printf("\n");
    }
}