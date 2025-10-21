#include <stdio.h>
#include <string.h>

int main() {
    int M, x, bit = 0;
    char cmd[10];
    scanf("%d", &M);
    while (M--) {
        scanf("%s", cmd);
        if (!strcmp(cmd, "add")) {
            scanf("%d", &x);
            bit |= (1 << x);
        } else if (!strcmp(cmd, "remove")) {
            scanf("%d", &x);
            bit &= ~(1 << x);
        } else if (!strcmp(cmd, "check")) {
            scanf("%d", &x);
            printf("%d\n", (bit & (1 << x)) ? 1 : 0);
        } else if (!strcmp(cmd, "toggle")) {
            scanf("%d", &x);
            bit ^= (1 << x);
        } else if (!strcmp(cmd, "all")) {
            bit = (1 << 21) - 2;
        } else if (!strcmp(cmd, "empty")) {
            bit = 0;
        }
    }
    return 0;
}
