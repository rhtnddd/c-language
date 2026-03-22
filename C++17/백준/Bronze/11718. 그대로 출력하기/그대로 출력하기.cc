#include <stdio.h>
int main(void)
{
    char s[102];
    while(fgets(s, sizeof(s), stdin)!=NULL)
    {
        printf("%s",s);
    }
    return 0;
}