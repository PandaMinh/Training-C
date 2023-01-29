#include<stdio.h>

int t(int *a, int *b){
    return *a+*b;
}

int main(){
    int m;
    scanf("%d", &m);
    while(m--){
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d", t(&a, &b));
        printf("\n");
    }
    return 0;
}