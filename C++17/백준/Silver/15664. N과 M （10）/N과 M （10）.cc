#include <stdio.h>
int n, m;
int a[10000];
int b[10000];
int check[10] = {0};
void backtrack(int step, int start)
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
        int prev = -1;
        for (int i = start; i < n; i++)
        {
            if (check[i] == 0 && b[i] != prev)
            {
                prev = b[i];
                check[i] = 1;
                a[step] = b[i];
                backtrack(step + 1, i);
                check[i] = 0;
            }
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
    backtrack(0, 0);
    return 0;
}