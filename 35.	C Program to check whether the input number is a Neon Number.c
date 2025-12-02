#include <stdio.h>

int main() {
    int n, sq, sum = 0;
    scanf("%d", &n);

    sq = n * n;

    while (sq > 0) {
        sum += sq % 10;
        sq /= 10;
    }

    if (sum == n)
        printf("Neon Number");
    else
        printf("Not a Neon Number");

    return 0;
}
