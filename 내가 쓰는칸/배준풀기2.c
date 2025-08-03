// 2563문제
// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int paper[100][100] = {0};
//     int totalArea = 0;
//     for(int i = 0; i < n; i++)
//     {
//         int x, y;
//         scanf("%d %d", &x, &y);
//         for(int row = y; row < y + 10; row++)
//         {
//             for(int col = x; col < x + 10; col++)
//             {
//                 if(paper[row][col] == 0)
//                 {
//                     paper[row][col] = 1;
//                     totalArea++;
//                 }
//             }
//         }
//     }
//     printf("%d\n",totalArea);
//     return 0;
// }
// 2164문제
// #include <stdio.h>
// int n;
// int first=0;
// int end=0;
// int card[1000001];
// int main(void)
// {
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++)
//     {
//         card[end++]=i;
//     }
//     for(int i=0;i<n-1;i++)
//     {
//         first++;
//         card[end++]=card[first++];
//     }
//     printf("%d",card[first]);
// }
// 10773문제
// #include <stdio.h>
// int main()
// {
//     int k;
//     scanf("%d", &k);
//     int stack[100000];
//     int top = -1;
//     for (int i = 0; i < k; i++)
//     {
//         int num;
//         scanf("%d", &num);
//         if(num == 0)
//         {
//             if(top != -1)
//             {
//                 top--;
//             }
//         }
//         else
//         {
//             top++;
//             stack[top] = num;
//         }
//     }
//     long long sum = 0;
//     for (int i = 0; i <= top; i++)
//     {
//         sum += stack[i];
//     }
//     printf("%lld\n", sum);
//     return 0;
// }
// 10828문제
#include <stdio.h>
#include <string.h>
int main(void)
{
    int n;
    int first=-1;
    int size=0;
    char s[10];
    int sum[100000];
    scanf("%d", &n);
    for (int i=0;i<n;i++)
    {
        scanf("%s",s);
        if (strcmp(s,"push")==0)
        {
            int a;
            scanf("%d",&a);
            sum[++first]=a;
            size++;
        }
        else if (strcmp(s,"pop")==0)
        {
            if (size==0)
            {
                printf("-1\n");
            }
            else
            {
                printf("%d\n",sum[first--]);
                size--;
            }
        }
        else if (strcmp(s,"size")==0)
        {
            printf("%d\n",size);
        }
        else if (strcmp(s,"empty")==0)
        {
            if (size==0)
            {
                printf("1\n");
            }
            else
            {
                printf("0\n");
            }
        }
        else if (strcmp(s,"top")==0)
        {
            if (size==0)
            {
                printf("-1\n");
            }
            else
            {
                printf("%d\n",sum[first]);
            }
        }
    }
}