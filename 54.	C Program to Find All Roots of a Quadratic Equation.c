#include <stdio.h>
#include <math.h>

int main() {
    float a,b,c,d;
    scanf("%f %f %f",&a,&b,&c);

    d = b*b - 4*a*c;

    if(d > 0){
        printf("Real: %.2f %.2f",
        (-b+sqrt(d))/(2*a), (-b-sqrt(d))/(2*a));
    }
    else if(d == 0){
        printf("Equal: %.2f", -b/(2*a));
    }
    else{
        printf("Complex: %.2f ± %.2fi",
        -b/(2*a), sqrt(-d)/(2*a));
    }
}
