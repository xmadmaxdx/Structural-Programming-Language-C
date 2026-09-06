#include <stdio.h>

int main() {
    int temp;

    printf("Enter temperature: ");
    scanf("%d", &temp);

    if (temp < 0) {
        printf("Freezing\n");
    } else if (temp < 20) {
        printf("Cold\n");
    } else if (temp < 35) {
        printf("Normal\n");
    } else {
        printf("Very hot\n");
    }
    return 0;
}