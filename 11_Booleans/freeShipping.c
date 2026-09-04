#include <stdio.h>

int main() {
    int price;
    int freeShipping;

    printf("Enter price: ");
    scanf("%d", &price);

    freeShipping = price > 100;
    printf("Free shipping: %d\n", freeShipping);
    return 0;
}