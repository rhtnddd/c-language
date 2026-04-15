#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    int fib[101] = {0, 1};
    for (int i = 2; i <= n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    printf("%d %d", fib[n - 1], fib[n]);
    return 0;
}