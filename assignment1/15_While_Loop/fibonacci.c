#include <stdio.h>

int main() {
    int n, i = 0, a = 0, b = 1, next;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    while (i < n) {
        printf("%d\n", a);
        next = a + b;
        a = b;
        b = next;
        i++;
    }
    return 0;
}