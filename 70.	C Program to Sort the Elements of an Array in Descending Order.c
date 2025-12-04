#include <stdio.h>

int main() {
    int a[100], n, temp;

    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(int i = 0; i < n-1; i++)
        for(int j = i+1; j < n; j++)
            if(a[j] > a[i]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }

    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;   
}
