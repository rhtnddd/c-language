#include <stdio.h>

int main() {
    int n, k;
    if (scanf("%d %d", &n, &k) != 2) return 0;
    if (k > n - k) k = n - k;
    long long num = 1, den = 1;
    for (int i = 0; i < k; i++) {
        num *= (n - i);
        den *= (i + 1);
    }
    printf("%lld\n", num / den);
    return 0;
}
