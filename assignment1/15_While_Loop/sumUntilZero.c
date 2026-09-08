#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter numbers (0 to stop): ");
    do {
        scanf("%d", &num);
        sum += num;
    } while (num != 0);

    printf("Sum = %d\n", sum);
    return 0;
}