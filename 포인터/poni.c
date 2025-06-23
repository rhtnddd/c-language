#include <stdio.h>
int main(void)
{
    int a=10;
    int *p=&a;
    printf("%d\n",*p);
    printf("%p",p);
}