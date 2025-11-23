#include <stdio.h>
int main() {
    int i, j, n = 5;

    for(i = n; i >= 1; i--) {
        for(j = 1; j <= n - i; j++)
            printf(" ");
        for(j = 1; j <= 2*i - 1; j++) {
            if(j == 1 || j == 2*i - 1 || i == n)
                printf("*");  
            else
                printf(" ");  
        }
        printf("\n");
    }
    return 0;
}
