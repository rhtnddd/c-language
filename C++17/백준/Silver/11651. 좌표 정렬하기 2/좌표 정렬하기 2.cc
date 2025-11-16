#include <stdio.h>
int temp[100001][2];
void merge(int arr[][2], int left, int mid, int right) {
    int i = left;
    int j = mid + 1;
    int k = left;
    while (i <= mid && j <= right)
    {
        if (arr[i][0] < arr[j][0] || (arr[i][0] == arr[j][0] && arr[i][1] < arr[j][1]))
        {
            temp[k][0] = arr[i][0];
            temp[k][1] = arr[i][1];
            i++;
        }
        else
        {
            temp[k][0] = arr[j][0];
            temp[k][1] = arr[j][1];
            j++;
        }
        k++;
    }
    while (i <= mid)
    {
        temp[k][0] = arr[i][0];
        temp[k][1] = arr[i][1];
        i++; k++;
    }
    while (j <= right)
    {
        temp[k][0] = arr[j][0];
        temp[k][1] = arr[j][1];
        j++; k++;
    }
    for (int l = left; l <= right; l++)
    {
        arr[l][0] = temp[l][0];
        arr[l][1] = temp[l][1];
    }
}
void merge_sort(int arr[][2], int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;
        merge_sort(arr, left, mid);
        merge_sort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}
int main(void)
{
    int n;
    int japoo[100001][2];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &japoo[i][1], &japoo[i][0]);
    }
    merge_sort(japoo, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        printf("%d %d\n", japoo[i][1], japoo[i][0]);
    }
    return 0;
}