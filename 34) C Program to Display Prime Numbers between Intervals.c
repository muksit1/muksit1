#include <stdio.h>
int main() {
    int lower, upper;
    printf("Enter lower and upper limit: ");
    scanf("%d %d", &lower, &upper);
    for(int num = lower; num <= upper; num++) {
        int flag = 1;
        if(num <= 1) continue;
        for(int i = 2; i <= num/2; i++)
            if(num % i == 0) { flag = 0; break; }
        if(flag) printf("%d ", num);
    }
    return 0;
}
