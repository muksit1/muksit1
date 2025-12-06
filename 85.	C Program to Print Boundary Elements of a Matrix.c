#include<stdio.h>
int main(){
    int r,c,a[10][10],i,j;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++) for(j=0;j<c;j++) scanf("%d",&a[i][j]);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
            if(i==0||i==r-1||j==0||j==c-1) printf("%d ",a[i][j]);
        printf("\n");
    }
    return 0;
}
