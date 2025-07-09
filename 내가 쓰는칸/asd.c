// #include <stdio.h>
// int main(void)
// {
//     long long int a,b;
//     int sum=0;
//     scanf("%lld %lld",&a,&b);
//     for(int i=0;i<=a;i++)
//     {
//         if(a%i==0&&b%i==0)
//         {
//             sum=i;
//         }
//     }
//     printf("%lld\n",sum);
//     printf("%lld",(a/sum)*(b/sum)*sum);
// }
// #include <stdio.h>
// int main(void)
// {
//     int a;
//     scanf("%d",&a);
//     for(int i=a;i>-1;i--)
//     {
//         for(int j=0;j<i;j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
// }
// #include <stdio.h>
// int main(void)
// {
//     int a,b,c,sum;
//     scanf("%d %d %d %d",&a,&b,&c,&sum);
//     c+=sum%60;
//     if(c>=60)
//     {
//         b+=c/60;
//     }
//     b+=sum/60;
//     if(b>=60)
//     {
//         a+=b/60;
//     }
//     a+=sum/3600;
//     printf("%d %d %d",a,b,c);
// }
