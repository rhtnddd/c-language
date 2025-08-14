// 15996문제
// #include <stdio.h>
// int main(void)
// {
//     long long int n,a;
//     scanf("%lld %lld",&n,&a);  
//     long long int count=0;
//     while(n>0)
//     {
//         n/=a;
//         count+=n;
//     }
//     printf("%lld\n",count);   
//     return 0;
// }
// 11727문제
// #include <stdio.h>
// int main(void)
// {
//     int a[1001]={1,1,};
//     int n;
//     scanf("%d",&n);
//     for(int i=2;i<=n;i++)
//     {
//         a[i]=(a[i-1]+2*a[i-2])%10007;
//     }
//     printf("%d\n",a[n]);
//     return 0;
// }
// 1629문제
#include <stdio.h>
int main(void)
{
    long long int a,b,c;
    int sum=1;
    scanf("%lld %lld %lld",&a,&b,&c);
    while(b>0)
    {
        if(b%2==1)
        {
            sum=(sum*a)%c;
        }
        b/=2;
        a=(a*a)%c;
    }
    printf("%d\n",sum);
    return 0;
}