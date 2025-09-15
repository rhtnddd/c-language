#include <stdio.h>
#include <string.h>
int main(void)
{
    int n, m;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char s[100001];
        char a[400001];
        int p[100001];
        int count = 0, num = 0, num1 = 0, innum = 0;
        int first, end;
        int error = 0;
        scanf("%s", s);
        scanf("%d", &m);
        while (getchar() != '\n')
            ;
        fgets(a, sizeof(a), stdin);
        int len = strlen(a);
        if (len > 0 && a[len - 1] == '\n')
        {
            a[len - 1] = '\0';
        }
        for (int j = 0; a[j]; j++)
        {
            if (a[j] >= '0' && a[j] <= '9')
            {
                num = num * 10 + (a[j] - '0');
                innum = 1;
            }
            else
            {
                if (innum)
                {
                    p[count++] = num;
                    num = 0;
                    innum = 0;
                }
            }
        }
        first = 0;
        end = count - 1;
        for (int j = 0; s[j] != '\0'; j++)
        {
            if (s[j] == 'R')
            {
                num1 = !num1;
            }
            else if (s[j] == 'D')
            {
                if (first > end)
                {
                    error = 1;
                    break;
                }
                if (!num1)
                    first++;
                else
                    end--;
            }
        }

        if (error)
        {
            printf("error\n");
            continue;
        }
        printf("[");
        if (!num1)
        {
            for (int j = first; j <= end; j++)
            {
                printf("%d", p[j]);
                if (j < end)
                    printf(",");
            }
        }
        else
        {
            for (int j = end; j >= first; j--)
            {
                printf("%d", p[j]);
                if (j > first)
                    printf(",");
            }
        }
        printf("]\n");
    }
    return 0;
}