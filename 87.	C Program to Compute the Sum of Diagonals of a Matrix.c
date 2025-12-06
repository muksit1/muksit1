#include<stdio.h>
int main(){
    int n,a[10][10],i,j,primary=0,secondary=0;
    scanf("%d",&n);
    for(i=0;i<n;i++) for(j=0;j<n;j++) scanf("%d",&a[i][j]);
    for(i=0;i<n;i++){
        primary+=a[i][i];
        secondary+=a[i][n-1-i];
    }
    printf("Primary=%d Secondary=%d",primary,secondary);
    return 0;
}
