#include <stdio.h>
#include <string.h>
#define R 31
#define M 1234567891
int main()
{
    int L;
    char str[51];
    scanf("%d", &L);
    scanf("%s", str);
    long long int hash = 0;
    long long int r_power = 1;
    for (int i = 0; i < L; i++)
    {
        int value = str[i] - 'a' + 1;
        hash = (hash + value * r_power) % M;
        r_power = (r_power * R) % M;
    }
    printf("%lld\n", hash);
    return 0;
}
