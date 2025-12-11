#include <stdio.h>
int main()
{
    int k;
    scanf("%d", &k);
    int stack[100000];
    int top = -1;
    for (int i = 0; i < k; i++)
    {
        int num;
        scanf("%d", &num);
        if(num == 0)
        {
            if(top != -1)
            {
                top--;
            }
        }
        else
        {
            top++;
            stack[top] = num;
        }
    }
    long long sum = 0;
    for (int i = 0; i <= top; i++)
    {
        sum += stack[i];
    }
    printf("%lld\n", sum);
    return 0;
}