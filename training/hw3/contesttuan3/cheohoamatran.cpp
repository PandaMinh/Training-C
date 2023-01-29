#include<stdio.h>

int main(){
    int n, i, j;
    long long a[105][105] = {};
    long long c[105][105] = {};
    scanf("%d", &n);
    for(i = 0; i < n; ++i){
        for(j = 0; j < n; ++j){
            scanf("%lld", &a[i][j]);
        }
    }
    for(i = 0; i < n; ++i){
        c[i][i] = 0;
        for(j = i; j < n; ++j){
            c[i][i] += a[i][j];
        }
        for(j = i; j < n; ++j){
            c[i][i] += a[j][i];
        }
        c[i][i] -= a[i][i];
    }
    for(i = 0; i < n; ++i){
        for(j = 0; j <n; ++j){
            printf("%lld ", c[i][j]);
        }
        printf("\n");
    }
    printf("VlETNAM vo dich!!");
    return 0;
}