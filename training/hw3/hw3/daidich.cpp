#include<stdio.h>

int main(){
    int m, n, i, j, dem = 0;
    int a[105][105] = {};
    int b[105][105] = {};
    int c[105][105] = {};
    scanf("%d %d", &m, &n);
    for(i = 1; i <= m; i++){
        for(j = 1; j <= n; ++j){
            a[i][j] = (i - 1) * n + j;
            if(a[i][j] % 6 == 0 || a[i][j] % 8 == 0){
                b[i][j] = 1;
            } else b[i][j] = 0;
        }
    }
    b[1][1] = 1;
    for(i = 1; i <= m; ++i){
        for(j = 1; j <= n; ++j){
            if(b[i][j] == 1){
                if(b[i-1][j-1] == 0 && b[i-1][j+1] == 0 && b[i-1][j] == 0 && b[i][j+1] == 0 && b[i][j-1] == 0 && b[i+1][j] == 0 && b[i+1][j-1] == 0 && b[i+1][j+1] == 0){
                    c[i][j] = 1;
                }
            }
        }
    }
    //c[1][1] = 1;
    for(i = 1; i <= m; ++i){
        for(j = 1; j <= n; ++j){
            if(c[i][j] == 1){
                dem++;
            }
        }
    }
    printf("%d", dem);
    return 0;
}