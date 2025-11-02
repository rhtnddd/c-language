#include <stdio.h>
#include <string.h>
int main(void)
{
    char bin[1000001];
    scanf("%s", bin);
    int len = strlen(bin);
    int mod = len % 3;
    if(mod == 1)
    {
        printf("%d", bin[0] - '0');
    }
    else if(mod == 2)
    {
        printf("%d", (bin[0]-'0')*2 + (bin[1]-'0'));
    }
    for(int i = mod; i < len; i += 3)
    {
     printf("%d", (bin[i]-'0')*4 + (bin[i+1]-'0')*2 + (bin[i+2]-'0'));   
    }
    printf("\n");
    return 0;
}
