// 12865문제
// #include <stdio.h>
// int a[101][100001];
// int w[101],v[101];
// int main(void)
// {
//     int n,k;
//     scanf("%d %d",&n,&k);
//     for(int i=1;i<=n;i++)
//     {
//         scanf("%d %d",&w[i],&v[i]);
//     }
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=k;j++)
//         {
//             if(j<w[i])
//             {
//                 a[i][j]=a[i-1][j];
//             }
//             else
//             {
//                 int notake=a[i-1][j];
//                 int take=a[i-1][j-w[i]]+v[i];
//                 if(notake>take)
//                 {
//                     a[i][j]=notake;
//                 }
//                 else
//                 {
//                     a[i][j]=take;
//                 }
//             }
//         }
//     }
//     printf("%d\n",a[n][k]);
//     return 0;
// }
// 2293문제
// #include <stdio.h>
// int a[100001];
// int main(void)
// {
//     int n,k;
//     int coin;
//     scanf("%d %d",&n,&k);
//     a[0]=1;
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&coin);
//         for(int j=coin;j<=k;j++)
//         {
//             a[j]+=a[j-coin];
//         }
//     }
//     printf("%d\n",a[k]);
//     return 0;
// }
// 2294문제
// #include <stdio.h>
// int a[100001];
// int main(void)
// {
//     int n,k;
//     scanf("%d %d",&n,&k);
//     int coin[n];
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d", &coin[i]);
//     }
//     for(int i=1;i<=k;i++)
//     {
//         a[i]=1000000;
//     }
//     a[0]=0;
//     for(int i=0;i<n;i++)
//     {
//         int coins = coin[i];
//         for(int j=coins;j<=k;j++)
//         {
//             if(a[j-coins]!=1000000)
//             {
//                 if(a[j]>a[j-coins]+1)
//                 {
//                     a[j]=a[j-coins]+1;
//                 }
//             }
//         }
//     }
//     if(a[k]==1000000)
//     {
//         printf("-1\n");
//     }
//     else
//     {
//         printf("%d\n",a[k]);
//     }
//     return 0;
// }
// 2749문제
// #include <stdio.h>
// int n[1500000]={0,1,};
// int main(void)
// {
//     int i;
//     long long int a;
//     scanf("%lld",&a);
//     int p=a%1500000;
//     for(i=2;i<=p;i++)
//     {
//         n[i]=(n[i-1]+n[i-2])%1000000;
//     }
//     printf("%d",n[p]);
// }
// if2문제
// #include <stdio.h>
// int main() {
//     int a = 16777217;
//     float b = 16777217;
//     int c = 16777216;
//     if (a == b && b == c && c != a) {
//         printf("true\n");
//     } else {
//         printf("false\n");
//     }
//     return 0;
// }
// 9660문제
#include <stdio.h>
int main(void)
{
    long long int n;
    scanf("%lld",&n);
    if(n%7==0||n%7==2)
    {
        printf("CY");
        return 0;
    }
    printf("SK");
}
