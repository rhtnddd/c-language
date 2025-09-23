#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    int a[100000];
    for (int i = 1; i <= n; i++)
    {
        a[i] = 500001;
    }
    a[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j * j <= i; j++)
        {
            if (a[i] > a[i - j * j] + 1)
            {
                a[i] = a[i - j * j] + 1;
            }
        }
    }
    printf("%d\n", a[n]);
    return 0;
}