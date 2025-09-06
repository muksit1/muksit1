#include <stdio.h>
int main() {
    int num, reversed = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0) {
        remainder = num % 10;            
        reversed = reversed * 10 + remainder; 
        num = num / 10;                   
    }
    printf("Reversed number: %d\n", reversed);
    return 0;
}
