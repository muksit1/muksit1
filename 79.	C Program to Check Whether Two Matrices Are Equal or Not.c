#include<stdio.h>
int main(){
    int r,c,a[50][50],b[50][50],i,j,f=1;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&b[i][j]);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            if(a[i][j]!=b[i][j]) f=0;

    if(f) printf("Equal");
    else printf("Not Equal");
    return 0;
}
