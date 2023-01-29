#include<stdio.h>

int main(){
    int n, i, j, k = 0, p = 0, h, c;
    int a[105][105]= {};
    scanf("%d", &n);
    h = n;
    c = n;
    while(k <= n * n){
        for(i = p; i < c; ++i){
            k = k + 1;
            a[p][i] = k;
        }
        for(i = p + 1; i < h; ++i){
            k = k + 1;
            a[i][c - 1]= k;
        }
        for(i = c - 2; i >= p; --i){
            k = k + 1;
            a[h - 1][i] = k;
        }
        for(i = h - 2; i > p; --i){
            k = k + 1;
            a[i][p] = k;
        }
        p++;
        h--;
        c--;
    }
    for(i = 0; i < n; ++i){
        for(j = 0; j < n; ++j){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}