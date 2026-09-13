#include <stdio.h>

int main() {
    int nums[] = {3, 7, 2, 9, 5, 8, 4};

    for (int i = 0; i < 7; i++) {
        if (nums[i] % 2 == 0) {
            printf("First even: %d at index %d\n", nums[i], i);
            break;
        }
    }
    return 0;
}