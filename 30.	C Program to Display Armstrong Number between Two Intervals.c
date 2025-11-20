#include <stdio.h>
#include <math.h>
int main() {
    int low, high;
    printf("Enter lower interval: ");
    scanf("%d", &low);
    printf("Enter upper interval: ");
    scanf("%d", &high);
    printf("Armstrong numbers between %d and %d are:\n", low, high);
    for (int num = low; num <= high; num++) {
        int original = num;
        int digits = 0;
        for (int temp = num; temp > 0; temp /= 10) {
            digits++;
        }
        int sum = 0;
        for (int temp = num; temp > 0; temp /= 10) {
            int rem = temp % 10;
            sum += pow(rem, digits);
        }
        if (sum == original) {
            printf("%d ", num);
        }
    }
    return 0;
}
