#include <stdio.h>

int a[100], top = -1;

void push(int x){ a[++top] = x; }
int pop(){ return a[top--]; }

void insertBottom(int x){
    if(top == -1){ push(x); return; }
    int t = pop();
    insertBottom(x);
    push(t);
}

void reverse(){
    if(top == -1) return;
    int t = pop();
    reverse();
    insertBottom(t);
}

int main(){
    int n, x;
    scanf("%d", &n);
    while(n--){ scanf("%d", &x); push(x); }
    reverse();
    for(int i = 0; i <= top; i++) printf("%d ", a[i]);
}
