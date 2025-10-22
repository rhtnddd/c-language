#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int idx;
    int pri;
} Doc;

int main() {
    int T;
    if (scanf("%d", &T) != 1) return 0;
    while (T--) {
        int N, M;
        scanf("%d %d", &N, &M);
        Doc q[100];
        int head = 0, len = N;
        for (int i = 0; i < N; ++i) {
            scanf("%d", &q[i].pri);
            q[i].idx = i;
        }
        int printed = 0;
        while (1) {
            Doc cur = q[head];
            int hasHigher = 0;
            for (int i = 1; i < len; ++i) {
                int pos = (head + i) % 100;
                if (q[pos].pri > cur.pri) {
                    hasHigher = 1;
                    break;
                }
            }
            if (hasHigher) {
                int tail = (head + len) % 100;
                q[tail] = cur;
                head = (head + 1) % 100;
            } else {
                printed++;
                head = (head + 1) % 100;
                len--;
                if (cur.idx == M) {
                    printf("%d\n", printed);
                    break;
                }
            }
        }
    }
    return 0;
}
