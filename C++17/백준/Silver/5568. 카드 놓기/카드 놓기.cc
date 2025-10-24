#include <stdio.h>
#include <string.h>

int n, k;
char cards[10][10];
int used[10];
char results[10000][40];
int resCount = 0;

int exists(char *s) {
    for (int i = 0; i < resCount; i++) {
        if (strcmp(results[i], s) == 0) return 1;
    }
    return 0;
}

void dfs(char *cur, int depth) {
    if (depth == k) {
        if (!exists(cur)) strcpy(results[resCount++], cur);
        return;
    }

    for (int i = 0; i < n; i++) {
        if (!used[i]) {
            used[i] = 1;
            char next[40];
            strcpy(next, cur);
            strcat(next, cards[i]);
            dfs(next, depth + 1);
            used[i] = 0;
        }
    }
}

int main() {
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) {
        scanf("%s", cards[i]);
    }

    dfs("", 0);
    printf("%d\n", resCount);
    return 0;
}
