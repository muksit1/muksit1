#include <stdio.h>
int main() {
    char operator;
    float num1, num2, result;
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter first numbers: ");
    scanf("%f",&num1);
    printf("Enter second numbers: ");
    scanf("%f",&num2);
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result = %.2f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result = %.2f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result = %.2f\n", result);
            break;
        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                printf("Error: Cannot divide by zero.\n");
                return 1;
            }
            printf("Result = %.2f\n", result);
            break;
        default:
            printf("Error: Invalid operator.\n");
    }
    return 0;
}
