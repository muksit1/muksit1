#include <stdio.h>
struct Complex{
    float real, imag;
};
int main(){
    struct Complex a, b, sum;
    printf("Enter first complex number (real imag): ");
    scanf("%f %f", &a.real, &a.imag);
    printf("Enter second complex number (real imag): ");
    scanf("%f %f", &b.real, &b.imag);

    sum.real = a.real + b.real;
    sum.imag = a.imag + b.imag;

    printf("Sum = %.2f + %.2fi\n", sum.real, sum.imag);
    return 0;
}
