#include <stdio.h>
int main(void)
{
    int a = 1;
    int result = (++a > 1) || (++a > 2);
    printf("%d %d", a, result);
}