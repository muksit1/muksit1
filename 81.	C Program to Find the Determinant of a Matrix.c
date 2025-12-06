#include<stdio.h>
int main(){
    int n,i,j;
    float a[10][10],d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%f",&a[i][j]);

    if(n==2){
        d = a[0][0]*a[1][1] - a[0][1]*a[1][0];
    }
    else{
        d = a[0][0]*(a[1][1]*a[2][2] - a[1][2]*a[2][1])
          - a[0][1]*(a[1][0]*a[2][2] - a[1][2]*a[2][0])
          + a[0][2]*(a[1][0]*a[2][1] - a[1][1]*a[2][0]);
    }

    printf("%.2f",d);
    return 0;
}
