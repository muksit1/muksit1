#include <stdio.h>

int isPrime(int n) {
    if (n < 2) return 0;

    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Prime numbers between %d and %d:\n", a, b);

    for (int i = a; i <= b; i++) {
        if (isPrime(i))
            printf("%d ", i);
    }

    return 0;
}
