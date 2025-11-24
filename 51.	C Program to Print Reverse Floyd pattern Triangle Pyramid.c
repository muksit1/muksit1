#include <stdio.h>

int main() {
    int n, i, j, num;
        printf("Enter number of rows: ");
    scanf("%d", &n);
    num = n*(n+1)/2;
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d ", num);
            num--;
        }
        printf("\n");
    }
    return 0;
}
