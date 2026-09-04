#include <stdio.h>

int main() {
    const float PI = 3.14;
    int radius;

    printf("Enter radius: ");
    scanf("%d", &radius);

    printf("Area = %.2f\n", PI * radius * radius);
    return 0;
}