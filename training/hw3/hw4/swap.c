#include<stdio.h>

void swap(int *n, int *m){
    int tam;
    tam = *n;
    *n = *m;
    *m = tam;
}

int main(){
    int n;
    int m;
    scanf("%d %d", &n, &m);
    swap(&n, &m);
    printf("%d %d", n, m);
    return 0;
}