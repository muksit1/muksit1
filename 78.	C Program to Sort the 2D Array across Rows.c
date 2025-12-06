#include<stdio.h>
int main(){
    int r,c,a[50][50],i,j,k,t;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<r;i++)
        for(j=0;j<c-1;j++)
            for(k=0;k<c-1-j;k++)
                if(a[i][k] > a[i][k+1]){
                    t=a[i][k];
                    a[i][k]=a[i][k+1];
                    a[i][k+1]=t;
                }

    for(i=0;i<r;i++){
        for(j=0;j<c;j++) printf("%d ",a[i][j]);
        printf("\n");
    }
    return 0;
}
