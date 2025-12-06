#include<stdio.h>
int main(){
    int r,c,a[10][10],b[10][10],i,j;
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++) for(j=0;j<c;j++) scanf("%d",&a[i][j]);
    for(i=0;i<r;i++)
        for(j=0;j<c;j++) b[j][r-1-i]=a[i][j];
    for(i=0;i<c;i++){
        for(j=0;j<r;j++) printf("%d ",b[i][j]);
        printf("\n");
    }
    return 0;
}
