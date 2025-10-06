#include <stdio.h>
int main(void)
{
    int n;
    if (scanf("%d", &n) != 1)
    {
        return 0;
    }
    if (n == 0)
    {
        printf("0\n");
        return 0;
    }
    int cnt[31] = {0};
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        cnt[x]++;
    }
    int k = (int)(n * 0.15 + 0.5);
    for (int v = 1; v <= 30 && k > 0; v++)
    {
        if (cnt[v] <= k)
        {
            k -= cnt[v];
            cnt[v] = 0;
        }
        else
        {
            cnt[v] -= k;
            k = 0;
        }
    }
    k = (int)(n * 0.15 + 0.5);
    for (int v = 30; v >= 1 && k > 0; v--)
    {
        if (cnt[v] <= k)
        {
            k -= cnt[v];
            cnt[v] = 0;
        }
        else
        {
            cnt[v] -= k;
            k = 0;
        }
    }
    long long int sum = 0;
    int remain = 0;
    for (int v = 1; v <= 30; v++)
    {
        sum += (long long)cnt[v] * v;
        remain += cnt[v];
    }
    if (remain == 0)
    {
        printf("0\n");
    }
    else
    {
        int ans = (int)((double)sum / remain + 0.5);
        printf("%d\n", ans);
    }
    return 0;
}