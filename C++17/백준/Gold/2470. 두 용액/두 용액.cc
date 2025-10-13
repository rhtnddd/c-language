#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main(void)
{
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    qsort(arr, n, sizeof(int), compare);
    int left = 0, right = n - 1;
    int bestL = left, bestR = right;
    int minSum = abs(arr[left] + arr[right]);
    while (left < right)
    {
        int sum = arr[left] + arr[right];
        if (abs(sum) < minSum)
        {
            minSum = abs(sum);
            bestL = left;
            bestR = right;
        }
        if (sum < 0)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    printf("%d %d\n", arr[bestL], arr[bestR]);
    free(arr);
    return 0;
}