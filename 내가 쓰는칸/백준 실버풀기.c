// 15549문제
// int -2147483648

// 1158문제
// #include <stdio.h>
// int main(void)
// {
//     int N, K;
//     if (scanf("%d %d", &N, &K) != 2) return 0;
//     int q[5000];
//     int head = 0, tail = 0, cnt = 0;
//     for (int i = 1; i <= N; ++i) {
//         q[tail] = i;
//         tail = (tail + 1) % 5000;
//         cnt++;
//     }
//     printf("<");
//     while (cnt > 0) {
//         for (int i = 0; i < K - 1; ++i) {
//             int x = q[head];
//             head = (head + 1) % 5000;
//             q[tail] = x;
//             tail = (tail + 1) % 5000;
//         }
//         int removed = q[head];
//         head = (head + 1) % 5000;
//         cnt--;

//         if (cnt == 0) {
//             printf("%d", removed);
//         } else {
//             printf("%d, ", removed);
//         }
//     }
//     printf(">\n");
//     return 0;
// }

// 1026문제
// #include <stdio.h>
// int main(void)
// {
//     int n;
//     int temp=0;
//     int temp1=0;
//     int sum=0;
//     int a[100];
//     int b[100];
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&b[i]);
//     }
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             if(a[i]>a[j])
//             {
//                 temp=a[i];
//                 a[i]=a[j];
//                 a[j]=temp;
//             }
//             if(b[i]<b[j])
//             {
//                 temp1=b[i];
//                 b[i]=b[j];
//                 b[j]=temp1;
//             }
//         }
//     }
//     for(int i=0;i<n;i++)
//     {
//         sum+=a[i]*b[i];
//     }
//     printf("%d\n",sum);
//     return 0;
// }

// 9655문제
// #include <stdio.h>
// int main(void)
// {
//     int n;
//     scanf("%d",&n);
//     if(n%2==1)
//     {
//         printf("SK\n");
//     }
//     else
//     {
//         printf("CY\n");
//     }
//     return 0;
// }

// 9656문제
// #include <stdio.h>
// int main(void)
// {
//     int n;
//     scanf("%d",&n);
//     if(n%2==0)
//     {
//         printf("SK\n");
//     }
//     else
//     {
//         printf("CY\n");
//     }
//     return 0;
// }

// 9657문제
#include <stdio.h>
int main(void)
{
    int a[2000]={1,0,1,1,};
    int m[3]={1,3,4};
    int n;
    scanf("%d",&n);
    for(int i=4;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(a[i-m[j]]==0)
            {
                a[i]=1;
            }
        }
    }
    if(a[n-1]==0)
    {
        printf("CY\n");
        return 0;
    }
    else
    {
        printf("SK\n");
        return 0;
    }
}