#include<stdio.h>
int main(){
    int n,a[100],i,t;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    t=a[0];
    for(i=1;i<n;i++) a[i-1]=a[i];
    a[n-1]=t;
    for(i=0;i<n;i++) printf("%d ",a[i]);
    return 0;
}
