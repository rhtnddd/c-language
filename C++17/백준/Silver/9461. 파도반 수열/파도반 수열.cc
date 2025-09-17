#include <stdio.h>
int main(void)
{
    long long int a[1000] = {1, 1, 1};
    int n, m;
    scanf("%d", &n);
    for (int i = 3; i < 101; i++)
    {
        a[i] = a[i - 3] + a[i - 2];
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &m);
        printf("%lld\n", a[m - 1]);
    }
    return 0;
}