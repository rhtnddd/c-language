#include <stdio.h>
#include <string.h>
int main(void)
{
    char o[333335];
    scanf("%s", o);
    int len = strlen(o);
    for (int i = 0; i < len; i++)
    {
        int n = o[i] - '0';
        if (i == 0)
        {
            if (n == 0)
            {
                printf("0");
            }
            else if (n == 1)
            {
                printf("1");
            }
            else if (n == 2)
            {
                printf("10");
            }
            else if (n == 3)
            {
                printf("11");
            }
            else if (n == 4)
            {
                printf("100");
            }
            else if (n == 5)
            {
                printf("101");
            }
            else if (n == 6)
            {
                printf("110");
            }
            else if (n == 7)
            {
                printf("111");
            }
        }
        else
        {
            printf("%03d", (n == 0) ? 0 : (n == 1) ? 1
                                      : (n == 2)   ? 10
                                      : (n == 3)   ? 11
                                      : (n == 4)   ? 100
                                      : (n == 5)   ? 101
                                      : (n == 6)   ? 110
                                                   : 111);
        }
    }
    return 0;
}