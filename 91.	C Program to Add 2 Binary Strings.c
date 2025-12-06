#include<stdio.h>
#include<string.h>
int main(){
    char a[100],b[100],res[200];
    int i,j,k=0,carry=0;
    scanf("%s %s",a,b);
    i=strlen(a)-1;
    j=strlen(b)-1;
    while(i>=0||j>=0||carry){
        int x = (i>=0? a[i--]-'0':0);
        int y = (j>=0? b[j--]-'0':0);
        int s = x+y+carry;
        res[k++] = (s%2)+'0';
        carry = s/2;
    }
    res[k]='\0';
    for(i=k-1;i>=0;i--) printf("%c",res[i]);
    return 0;
}
