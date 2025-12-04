#include <stdio.h>

int main() {
    int a[100], n, sum = 0;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    printf("Average = %.2f\n", (float)sum / n);
}
