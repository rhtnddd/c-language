// 풀어야함
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
// #include <stdio.h>
// int n[1000][1000]={0};
// int main(void)
// {
//     int a,b;
//     int japox;
//     int japoy;
//     scanf("%d %d",&a,&b);
//     int nx=0,ny=0,d=0;
//     int x[4]={1,0,-1,0},y[4]={0,1,0,-1};
//     for(int i=a*a;i>=1;i--)
//     {
//         n[nx][ny]=i;
//         if(nx+x[d%4]>=a||ny+y[d%4]>=a||nx+x[d%4]<0||ny+y[d%4]<0||n[nx+x[d%4]][ny+y[d%4]]!=0)
//         {
//             d++;
//         }
//         nx+=x[d%4];
//         ny+=y[d%4];
//     }
//     for(int i=0;i<a;i++)
//     {
//         for(int j=0;j<a;j++)
//         {
//             printf("%d ",n[i][j]);
//             if(b==n[i][j])
//             {
//                 japox=i+1;
//                 japoy=j+1;
//             }
//         }
        
//         printf("\n");
//     }
//     printf("%d %d",japox,japoy);
// }
// 14916문제
// #include <stdio.h>
// int main(void)
// {
//     int n;
//     int sum=0;
//     scanf("%d",&n);
//     for(;;)
//     {
//         if(n%5==0)
//         {
//             sum+=n/5;
//             break;
//         }
//         if(n<0)
//         {
//             printf("-1");
//             return 0;
//         }
//         sum+=1;
//         n-=2;
//     }
//     printf("%d",sum);
// }
// 11726문제
// #include <stdio.h>
// int main(void)
// {
//     long long int sum[1001]={1,1,};
//     int n;
//     scanf("%d",&n);
//     for(int i=2;i<=n;i++)
//     {
//         sum[i]=(sum[i-1]+sum[i-2])%10007;
//     }
//     printf("%lld",sum[n]);
// }
// 5347문제
#include <stdio.h>
long long int gcd(long long int a,long long int b)
{
    while(b!=0)
    {
        long long int temp=a%b;
        a=b;
        b=temp;
    }
    return a;
}
long long int lcm(long long int a,long long int b)
{
    return (a/gcd(a,b))*b;
}
int main(void)
{
    int n;
    scanf("%d", &n);

    for(int i=0;i<n;i++)
    {
        long long int a, b;
        scanf("%lld %lld",&a,&b);
        printf("%lld\n",lcm(a,b));
    }
    return 0;
}