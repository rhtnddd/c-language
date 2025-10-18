#include <stdio.h>

int main(void)
{
    long long int A, B, V;
    if (scanf("%lld %lld %lld", &A, &B, &V) != 3) return 0;
    long long int up = A - B;
    long long int need = V - B;
    long long int days = (need + up - 1) / up;
    printf("%lld\n", days);
    return 0;
}
