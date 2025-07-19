#include <stdio.h>
int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);
    int num1 = 0, num2 = 0;
    for (int i = 0; i < X; i++) {
        num1 = num1 * 10 + 1;
    }
    for (int i = 0; i < Y; i++) {
        num2 = num2 * 10 + 1;
    }
    printf("%d\n", num1 + num2);
    return 0;
}