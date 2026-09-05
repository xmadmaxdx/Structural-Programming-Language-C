#include <stdio.h>

int main() {
    int time;

    printf("Enter time: ");
    scanf("%d", &time);

    if (time < 12) {
        printf("Good morning\n");
    } else if (time < 18) {
        printf("Good day\n");
    } else {
        printf("Good evening\n");
    }
    return 0;
}