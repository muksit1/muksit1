#include<stdio.h>
int main(){
    int r,c,a[10][10],j;
    scanf("%d%d",&r,&c);
    for(int i=0;i<r;i++) for(j=0;j<c;j++) scanf("%d",&a[i][j]);
    for(j=0;j<c;j++){
        int t=a[0][j];
        a[0][j]=a[r-1][j];
        a[r-1][j]=t;
    }
    for(int i=0;i<r;i++){
        for(j=0;j<c;j++) printf("%d ",a[i][j]);
        printf("\n");
    }
    return 0;
}
