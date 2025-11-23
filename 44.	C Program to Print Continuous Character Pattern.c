#include <stdio.h>
int main() {
    int i, j, n = 5;
    char ch = 'A'; 

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++; 
        }
        printf("\n");
    }
    return 0;
}
