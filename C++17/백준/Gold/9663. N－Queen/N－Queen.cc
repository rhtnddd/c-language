#include <stdio.h>
int n;
long long int sum;

int col[15], d1[30], d2[30];
void dfs(int row)
{
    if (row == n)
    {
        sum++;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        int i1 = row + i;
        int i2 = row - i + (n - 1);
        if (!col[i] && !d1[i1] && !d2[i2])
        {
            col[i] = d1[i1] = d2[i2] = 1;
            dfs(row + 1);
            col[i] = d1[i1] = d2[i2] = 0;
        }
    }
}
int main(void)
{
    scanf("%d", &n);
    dfs(0);
    printf("%lld", sum);
    return 0;
}