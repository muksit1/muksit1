#include <stdio.h>

void merge(int a[], int l, int m, int r) {
    int x = m - l + 1, y = r - m;
    int L[x], R[y];

    for(int i=0;i<x;i++) L[i] = a[l+i];
    for(int j=0;j<y;j++) R[j] = a[m+1+j];

    int i=0,j=0,k=l;
    while(i<x && j<y) a[k++] = (L[i] < R[j]) ? L[i++] : R[j++];
    while(i<x) a[k++] = L[i++];
    while(j<y) a[k++] = R[j++];
}

void mergeSort(int a[], int l, int r) {
    if(l < r) {
        int m = (l+r)/2;
        mergeSort(a, l, m);
        mergeSort(a, m+1, r);
        merge(a, l, m, r);
    }
}

int main() {
    int n, a[100];
    scanf("%d", &n);

    for(int i=0;i<n;i++) scanf("%d",&a[i]);

    mergeSort(a, 0, n-1);

    for(int i=0;i<n;i++) printf("%d ", a[i]);
}
