#include <stdio.h>
int n, m;
int a[10000];
int b[10000];
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
        for (int i = 0; i < n; i++)
        {
            a[step] = b[i];
            backtrack(step + 1);
        }
    }
}
int main(void)
{
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int temp;
        for (int j = 0; j < n; j++)
        {
            if (b[i] < b[j])
            {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
    backtrack(0);
    return 0;
}