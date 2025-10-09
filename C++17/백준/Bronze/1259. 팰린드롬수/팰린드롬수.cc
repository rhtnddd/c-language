#include <stdio.h>
#include <string.h>
int main(void)
{
    char s[10];
    while (1)
    {
        scanf("%s", s);
        if (strcmp(s, "0") == 0)
        {
            break;
        }
        int len = strlen(s), flag = 1;
        for (int i = 0; i < len / 2; i++)
        {
            if (s[i] != s[len - 1 - i])
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
             printf("yes\n");   
        }
        else
        {
             printf("no\n");   
        }
    }
    return 0;
}
