#include<stdio.h>
int main(){
    int n,a[100],i,j=0;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=1;i<n;i++) if(a[i]!=a[j]) a[++j]=a[i];
    for(i=0;i<=j;i++) printf("%d ",a[i]);
    return 0;
}
