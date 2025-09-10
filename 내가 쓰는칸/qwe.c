// 1
// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
//     int n, i, sum = 0;
//     scanf("%d", &n);
//     int *a = (int *)malloc(n * sizeof(int));
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//         sum += a[i];
//     }
//     printf("%d\n", sum);
//     free(a);
//     return 0;
// }
// 2
// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
//     int n,k = 0;
//     scanf("%d", &n);
//     int *a = (int *)malloc(n * sizeof(int));
//     int *u = (int *)malloc(n * sizeof(int));
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         int d = 0;
//         for (int j = 0; j < k; j++)
//         {
//             if (u[j] == a[i])
//             {
//                 d = 1;
//                 break;
//             }
//         }
//         if (!d)
//.        {
//             u[k++] = a[i];
//         }
//     }
//     u = (int *)realloc(u, k * sizeof(int));
//     for (int i = 0; i < k; i++)
//     {
//         printf("%d ", u[i]);
//     }
//     free(a);
//     free(u);
//     return 0;
// }
// 3
// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
//     int a[15], n, num = 0;
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     int *b = (int *)malloc(n * sizeof(int));
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] % 2 == 0)
//         {
//             b[num++] = a[i];
//         }
//     }
//     b = (int *)realloc(b, num * sizeof(int));
//     for (int i = 0; i < num; i++)
//     {
//         printf("%d ", b[i]);
//     }
//     free(b);
//     return 0;
// }
// 4
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int n, len, maxl = 0, maxi = 0;
    char *str[10];
    char b[101];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", b);
        len = 0;
        while (b[len] != '\0')
        {
            len++;
        }
        str[i] = (char *)malloc((len + 1) * sizeof(char));
        for (int j = 0; j <= len; j++)
        {
            str[i][j] = b[j];
        }
        if (len > maxl)
        {
            maxl = len;
            maxi = i;
        }
    }
    printf("%s", str[maxi]);
    for (int i = 0; i < n; i++)
    {
        free(str[i]);
    }
    return 0;
}