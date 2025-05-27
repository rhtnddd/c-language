/*#include <stdio.h>
int main(void)
{
    int h,m;
    scanf("%d %d",&h,&m);
    printf("%d %d",((60*h+m) *2000/1440)/100,((60*h+m)*2000/1440)%100);
}*/
/*#include <stdio.h>
int main(void)
{
    int a;
    scanf("%d",&a);
    if(a%3==0)
    {
        printf("3의 배수");
    }
    else
    {
        printf("3.14");
    }
    return 0;
}*/
/*#include <stdio.h>
int main(void)
{
    int a;
    scanf("%d",&a);
    printf("%d",a%4==0&&a%100!=0||a%400==0);
    return 0;
}*/
/*#include <stdio.h>
int main(void)
{
    int a;
    scanf("%d",&a);
    printf("%d",(a/4)%2!=0);
}*/
// #include <stdio.h>
// int main(void)
// {
//     int n;
//     long long int num,max=0;
//     int sum=0;
//     scanf("%lld",&n);
//     for(int i=1;i<=n;i++)
//     {
//         scanf("%lld",&num);
//         if(num>=max)
//         {
//             max=num;
//             sum=i;
//         }
//     }
//     printf("%lld\n",max);
//     printf("%lld\n",sum);
// }
// #include <stdio.h>
// int main(void)
// {
//     int arr[6];
//     for(int i=0;i<6;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("%d",arr[0]+arr[1]+arr[2]+arr[3]+arr[4]+arr[5]);
// }
// #include <stdio.h>
// int main(void)
// {
//     int a[7];
//     for(int i=0;i<7;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(int i=0;i<7;i++)
//     {
//         if(a[i]%2!=0 && a[i]!=0)
//         {
//             printf("%d ",a[i]);
//         }
//     }
// }
// #include <stdio.h>
// int main(void)
// {
//     int a[6];
//     for(int i=0;i<6;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(int i=5;i>-1;i--)
//     {
//         printf("%d ",a[i]);
//     }
// }
// #include <stdio.h>
// int main(void)
// {
//     int a[6];
//     for(int i=5;i>-1;i--)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(int i=0;i<6;i++)
//     {
//         printf("%d ",a[i]);
//     }
// }
// #include <stdio.h>
// int main(void)
// {
//     int a[6];
//     for(int i=0;i<6;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     int max=a[0],min=a[0];
//     for(int i=1;i<6;i++)
//     {
//         if(max<=a[i])
//         {
//             max=a[i];
//         }
//         if(min>=a[i])
//         {
//             min=a[i];
//         }
//     }
//     printf("%d\n",max);
//     printf("%d\n",min);
// }
// #include <stdio.h>
// int main(void)
// {
//     int a[2][3];
//     for(int i=0;i<2;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     for(int i=0;i<2;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             printf("%d",a[i][j]);
//         }
//     }
// }
// #include <stdio.h>
// int main(void)
// {
//     int a[2][3];
//     for(int i=0;i<2;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             scanf("%d ",&a[i][j]);
//         }
//         printf("\n");
//     }
//     int sum=0;
//     for(int i=0;i<2;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             sum+=a[i][j];   
//         }
//     }
//     printf("%d",sum);
// }
// #include <stdio.h>
// int main(void)
// {
//     int a[2][3];
//     for(int i=0;i<2;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     for(int i=1;i>-1;i--)
//     {
//         for(int j=2;j>-1;j--)
//         {
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
// }
// #include <stdio.h>
// int main(void)
// {
//     int a[3][3];
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     int sum=0;
//     int sum1=0;
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             if(i==j)
//             {
//                 sum+=a[i][j];
//             }
//         }
//     }
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             if(i+j==2)
//             {
//                 sum1+=a[i][j];
//             }
//         }
//     }
//     printf("%d\n",sum);
//     printf("%d\n",sum1);
// }
// #include <stdio.h>
// int main(void)
// {
//     int a[3][3];
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     int sum=0;
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             if(a[i][j]!=a[j][i])
//             {
//                 sum++;
//                 printf("0");
//             }
//         }
//     }
//     if(sum==0)
//     {
//         printf("1");
//     }
// }
// #include <stdio.h>
// int main(void)
// {
//     int a[4][3];
//     for(int i=0;i<4;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     for(int i=0;i<4;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
// }