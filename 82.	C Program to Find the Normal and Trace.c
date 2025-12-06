#include<stdio.h>
#include<math.h>
int main(){
    int r,c,a[10][10],i,j,trace=0; double norm=0;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
            norm+=a[i][j]*a[i][j];
            if(i==j) trace+=a[i][j];
        }
    printf("Norm=%.2lf Trace=%d",sqrt(norm),trace);
    return 0;
}
