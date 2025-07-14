#include <stdio.h>
int main(void)
{
    int n;
    int a[1001];
    double sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int max = 0;
    for (int j = 1; j < n; j++)
    {
        if (a[max] <= a[j])
        {
            max = j;
        }
    }
    for (int i = 0; i < n; i++)
    {
        sum += ((double)a[i] / a[max]) * 100;
    }
    printf("%lf", sum / n);
}
