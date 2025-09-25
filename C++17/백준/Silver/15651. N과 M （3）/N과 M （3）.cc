#include <stdio.h>
int n, m;
int a[10000];
void backtrack(int step)
{
    if (step == m)
    {
        for (int i = 0; i < m; i++)
        {
            printf("%d ", a[i]);
        }
        printf("\n");
        return;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            a[step] = i;
            backtrack(step + 1);
        }
    }
}
int main(void)
{
    scanf("%d %d", &n, &m);
    backtrack(0);
    return 0;
}