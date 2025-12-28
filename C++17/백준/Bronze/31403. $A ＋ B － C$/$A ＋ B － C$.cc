#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    int a, b, c;
    char ab[10];
    char str_a[5], str_b[5];

    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", a + b - c);
    sprintf(str_a, "%d", a);
    sprintf(str_b, "%d", b);
    strcpy(ab, str_a);
    strcat(ab, str_b);

    int ab_num = atoi(ab);
    printf("%d\n", ab_num - c);

    return 0;
}