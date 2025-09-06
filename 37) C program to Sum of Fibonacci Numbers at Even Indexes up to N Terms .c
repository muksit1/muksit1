#include <stdio.h>
int main() {
    int n, t1 = 0, t2 = 1, next, sum = 0;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) sum += t1;
        next = t1 + t2;
        t1 = t2;
        t2 = next;
    }
    printf("Sum of Fibonacci numbers at even indexes = %d\n", sum);
    return 0;
}
