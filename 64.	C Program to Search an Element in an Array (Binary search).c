#include <stdio.h>

int main() {
    int a[100], n, x, l=0, h, m;

    scanf("%d", &n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&x);

    h = n-1;
    while(l <= h) {
        m = (l+h)/2;
        if(a[m] == x) { printf("Found\n"); return 0; }
        if(a[m] < x) l = m+1;
        else h = m-1;
    }
    printf("Not Found\n");
}
