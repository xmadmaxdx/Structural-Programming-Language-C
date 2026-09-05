#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You can vote\n");
    } else {
        printf("You cannot vote\n");
    }
    return 0;
}