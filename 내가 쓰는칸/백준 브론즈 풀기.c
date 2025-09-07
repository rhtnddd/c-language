// 17608문제
// #include <stdio.h>
// int main(void)
// {
//     int n;
//     scanf("%d",&n);
//     int a[100001];
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     int stack[100001];
//     int first=-1;
//     int count=0;
//     for(int i=n-1;i>=0;i--){
//         if(first==-1||a[i]>stack[first])
//         {
//             stack[++first]=a[i];
//             count++;
//         }
//     }
//     printf("%d\n",count);
//     return 0;
// }

// 1978문제
#include <stdio.h>
int main(void)
{
    int n, sum = 0, m[101], a[1001] = {1, 1};
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &m[i]);
    }
    for (int i = 2; i * i < 1001; i++)
    {
        for (int j = i * i; j < 1001; j += i)
        {
            if (!a[j])
            {
                a[j] = 1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[m[i]] == 0)
        {
            sum++;
        }
    }
    printf("%d\n", sum);
    return 0;
}