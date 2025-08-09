// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     int m, n;
//     char juso[100001][30];
//     char jusobibun[100001][30];
//     char jusocim[30];
//     scanf("%d %d", &m, &n);

//     for(int i = 0; i < m; i++)
//     {
//         scanf("%s %s", juso[i], jusobibun[i]);
//     }
//     for(int i = 0; i < n; i++)
//     {
//         scanf("%s", jusocim);
//         for(int j = 0; j < m; j++)
//         {
//             if(strcmp(jusocim, juso[j]) == 0)
//             {
//                 printf("%s\n", jusobibun[j]);
//                 break;
//             }
//         }
//     }
//     return 0;
// }
// 1913문제
#include <stdio.h>
int n[1000][1000]={0};
int main(void)
{
    int a,b;
    int japox;
    int japoy;
    scanf("%d %d",&a,&b);
    int nx=0,ny=0,d=0;
    int x[4]={1,0,-1,0},y[4]={0,1,0,-1};
    for(int i=a*a;i>=1;i--)
    {
        n[nx][ny]=i;
        if(nx+x[d%4]>=a||ny+y[d%4]>=a||nx+x[d%4]<0||ny+y[d%4]<0||n[nx+x[d%4]][ny+y[d%4]]!=0)
        {
            d++;
        }
        nx+=x[d%4];
        ny+=y[d%4];
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            printf("%d ",n[i][j]);
            if(b==n[i][j])
            {
                japox=i+1;
                japoy=j+1;
            }
        }
        
        printf("\n");
    }
    printf("%d %d",japox,japoy);
}