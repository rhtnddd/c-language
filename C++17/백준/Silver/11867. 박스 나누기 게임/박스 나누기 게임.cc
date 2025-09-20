#include <stdio.h>
int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);
    if (n % 2 == 1 && m % 2 == 1) 
    {
        printf("B");
    }
    else 
    {
        printf("A");
    }
    return 0;
}
