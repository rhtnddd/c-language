#include <stdio.h>
#include <string.h>
char left[600001], right[600001];
int ltop = 0, rtop = 0;
int main(void)
{
    char s[100001];
    int m;
    scanf("%s", s);
    scanf("%d", &m);
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        left[ltop++] = s[i];
    }
    for (int i = 0; i < m; i++)
    {
        char c;
        scanf(" %c", &c);
        if (c == 'L')
        {
            if (ltop > 0)
            {
                right[rtop++] = left[--ltop];
            }
        }
        else if (c == 'D')
        {
            if (rtop > 0)
            {
                left[ltop++] = right[--rtop];
            }
        }
        else if (c == 'B')
        {
            if (ltop > 0)
            {
                ltop--;
            }
        }
        else if (c == 'P')
        {
            char x;
            scanf(" %c", &x);
            left[ltop++] = x;
        }
    }
    for (int i = 0; i < ltop; i++)
    {
        printf("%c", left[i]);
    }
    for (int i = rtop - 1; i >= 0; i--)
    {
        printf("%c", right[i]);
    }
    return 0;
}