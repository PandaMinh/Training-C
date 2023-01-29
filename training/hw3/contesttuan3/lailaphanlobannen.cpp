#include<stdio.h>

int main(){
    int n, m, i, j;
    int a[55][55] = {};
    scanf("%d", &n, &m);
    for(i = 0; i < n; ++i){
        for(j = 0; j < m; ++j){
            scanf("%d", &a[i][j]);
        }
    }
    printf("YES");
    return 0;
}