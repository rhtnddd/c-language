#include <stdio.h>
#include <stdlib.h>
int q(const void *a, const void *b)
{
    int n = *(const int *)a;
    int m = *(const int *)b;
    if (n < m)
    {
        return -1;
    }
    if (n > m)
    {
        return 1;
    }
    return 0;
}
int l(int a[], int n, int key)
{
    int low = 0, high = n;
    while (low < high)
    {
        int mid = (low + high) / 2;
        if (a[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }
    return low;
}
int u(int a[], int n, int key)
{
    int low = 0, high = n;
    while (low < high)
    {
        int mid = (low + high) / 2;
        if (a[mid] <= key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }
    return low;
}
int main(void)
{
    int n, s;
    scanf("%d", &n);
    int *m = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &m[i]);
    }
    qsort(m, n, sizeof(int), q);
    scanf("%d", &s);
    int *a = (int *)malloc(s * sizeof(int));
    for (int i = 0; i < s; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < s; i++)
    {
        printf("%d ", u(m, n, a[i]) - l(m, n, a[i]));
    }
    free(m);
    free(a);
    return 0;
}