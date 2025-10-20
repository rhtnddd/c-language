#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void)
{
    char line[300];
    while (fgets(line, sizeof(line), stdin)) 
    {
        size_t len = strlen(line);
        if (len > 0 && line[len - 1] == '\n')
        {
            line[len - 1] = '\0';
            len--;
        }
        if (len == 1 && line[0] == '#') break;
        int count = 0;
        for (size_t i = 0; i < len; i++) {
            char c = tolower((unsigned char)line[i]);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') count++;
        }
        printf("%d\n", count);
    }
    return 0;
}
