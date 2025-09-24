#include <stdio.h>
int n, m;
int a[10000];
int check[10] = {0};
int key = 0;
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
            if (check[i] == 0)
            {
                a[step] = i;
                check[i] = 1;
                backtrack(step + 1);
                check[i] = 0;
            }
        }
    }
}
int main(void)
{
    scanf("%d %d", &n, &m);
    backtrack(0);
    return 0;
}