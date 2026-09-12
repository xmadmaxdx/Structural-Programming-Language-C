#include <stdio.h>

int main() {
    int num, i, isPrime;

    printf("Enter a number: ");
    scanf("%d", &num);

    num++;
    while (1) {
        isPrime = 1;
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("Next prime: %d\n", num);
            break;
        }
        num++;
    }
    return 0;
}