#include <stdio.h>

int main(){
    int n, a[100], max, min;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    max = min = a[0];

    for(int i = 1; i < n; i++){
        if(a[i] > max) max = a[i];
        if(a[i] < min) min = a[i];
    }

    printf("Max = %d\nMin = %d", max, min);
}
