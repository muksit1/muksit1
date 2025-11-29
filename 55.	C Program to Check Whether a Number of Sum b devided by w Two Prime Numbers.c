#include <stdio.h>

int prime(int n){
    for(int i=2;i<n;i++)
        if(n%i==0) return 0;
    return n>1;
}

int main(){
    int n, ok = 0;
    scanf("%d",&n);

    for(int i=2;i<=n/2;i++){
        if(prime(i) && prime(n-i)){
            printf("%d = %d + %d\n", n, i, n-i);
            ok = 1;
            break; 
        }
    }

    if(!ok) printf("No prime sum");

    return 0;
}
