#include <stdio.h>
int custom_strlen(const char* str)
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}
int main(void)
{
    char word[101];
    scanf("%s", word);
    int count = 0;
    int len = custom_strlen(word);
    for (int i = 0; i < len; i++)
    {
        count++;
        if (word[i] == 'c')
        {
            if (i + 1 < len && (word[i+1] == '=' || word[i+1] == '-'))
            {
                i++;
            }
        } else if (word[i] == 'd')
        {
            if (i + 1 < len && word[i+1] == 'z')
            {
                if (i + 2 < len && word[i+2] == '=')
                {
                    i += 2;
                }
            }
            else if (i + 1 < len && word[i+1] == '-')
            {
                i++;
            }
        }
        else if (word[i] == 'l' || word[i] == 'n')
        {
            if (i + 1 < len && word[i+1] == 'j')
            {
                i++;
            }
        }
        else if (word[i] == 's' || word[i] == 'z')
        {
            if (i + 1 < len && word[i+1] == '=')
            {
                i++;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}