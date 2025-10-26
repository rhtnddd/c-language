#include <stdio.h>

int main() {
    int T, k, n;
    int apt[15][15] = {0};

    for (int i = 0; i < 15; i++)
        apt[0][i] = i;

    for (int i = 1; i < 15; i++)
        for (int j = 1; j < 15; j++)
            apt[i][j] = apt[i][j - 1] + apt[i - 1][j];

    scanf("%d", &T);
    while (T--) {
        scanf("%d %d", &k, &n);
        printf("%d\n", apt[k][n]);
    }
    return 0;
}
