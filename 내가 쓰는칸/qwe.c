#include <stdio.h>
#include <string.h>
int yunsan(char a)
{
    if (a == '(')
    {
        return 0;
    }
    else if (a == '+' || a == '-')
    {
        return 1;
    }
    else
    {
        return 2;
    }
    return -1;
}
int main(void)
{
    char jungwibabnda[100];
    char stack[100];
    int top = -1;
    scanf("%s", jungwibabnda);
    for (int i = 0; i < strlen(jungwibabnda); i++)
    {
        char data = jungwibabnda[i];
        if (data >= 'a' && data <= 'z')
        {
            stack[++top] = data;
            printf("%c", stack[top--]);
        }
        else if (data == '(')
        {
            stack[++top] = data;
        }
        else if (data == ')')
        {
            while (top >= 0 && stack[top] != '(')
            {
                printf("%c", stack[top--]);
            }
            top--;
        }
        else
        {
            while (top >= 0 && yunsan(stack[top]) >= yunsan(data))
            {
                printf("%c", stack[top--]);
            }
            stack[++top] = data;
        }
    }
    while (top >= 0)
    {
        printf("%c", stack[top--]);
    }
}