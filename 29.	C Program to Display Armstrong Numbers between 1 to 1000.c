#include <stdio.h>

int main() {
    int num, original, remainder, result;

    printf("Armstrong numbers between 1 and 1000:\n");

    for (num = 1; num <= 1000; num++) {
        original = num;
        result = 0;

        while (original != 0) {
            remainder = original % 10;
            result += remainder * remainder * remainder;
            original /= 10;
        }

        if (result == num) {
            printf("%d ", num);
        }
    }

    return 0;
}
