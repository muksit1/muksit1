#include<stdio.h>
int main(){
    int n,a[100],x,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&x);
    for(i=0;i<n;i++)
        if(a[i]==x){
            for(j=i;j<n-1;j++) a[j]=a[j+1];
            n--; i--;
        }
    for(i=0;i<n;i++) printf("%d ",a[i]);
    return 0;
}
