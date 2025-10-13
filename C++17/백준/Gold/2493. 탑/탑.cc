#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int height;
    int index;
} Tower;
int main(void)
{
    int n;
    scanf("%d", &n);
    int *a = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    Tower *stack = (Tower *)malloc(sizeof(Tower) * n);
    int top = -1;
    int *result = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        while (top >= 0 && stack[top].height <= a[i])
            top--;
        if (top == -1)
            result[i] = 0;
        else
            result[i] = stack[top].index;
        top++;
        stack[top].height = a[i];
        stack[top].index = i + 1;
    }

    for (int i = 0; i < n; i++)
        printf("%d ", result[i]);

    free(a);
    return 0;
}
