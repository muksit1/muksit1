#include<stdio.h>
int main(){
    int n1,n2,a[100],b[100],c[200],i,j=0;
    scanf("%d",&n1);
    for(i=0;i<n1;i++) scanf("%d",&a[i]);
    scanf("%d",&n2);
    for(i=0;i<n2;i++) scanf("%d",&b[i]);
    for(i=0;i<n1;i++) c[j++]=a[i];
    for(i=0;i<n2;i++) c[j++]=b[i];
    for(i=0;i<j;i++) printf("%d ",c[i]);
    return 0;
}
