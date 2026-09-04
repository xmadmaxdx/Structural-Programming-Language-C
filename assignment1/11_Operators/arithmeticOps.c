#include <stdio.h>

int main() {
    int a = 10;
    int b = 3;

    printf("%d\n", a + b);
    printf("%d\n", a - b);
    printf("%d\n", a * b);
    printf("%d\n", a / b);
    printf("%d\n", a % b);

    a += 5;
    printf("%d\n", a);
    return 0;
}