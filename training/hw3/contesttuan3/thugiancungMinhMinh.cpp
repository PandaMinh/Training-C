#include<stdio.h>

int main(){
    long long n, m, i, j, hang, cot, dem, k;
    long long a[105][105] = {};
    long long b[10005] = {};
    scanf("%lld", &m, &n);
    for(i = 0; i < n; ++i){
        for(j = 0; j < m; ++j){
            scanf("%lld", &a[i][j]);
        }
    }
    dem = n * m - 1;
    k = 0;
    while(k <= n/2){
        for(i = k; i < m; ++i){
            b[dem] = a[k][i];
            dem--;
        }
        for(i = k + 1; i < n; ++i){
            b[dem] = a[i][m - 1];
            dem--;
        }
        for(i = m - 2; i >= k; --i){
            b[dem] = a[n - 1][i];
            dem--;
        }
        for(i = n - 2; i > k; --i){
            b[dem] = a[i][k];
            dem--;
        }
        k++;
        m--;
        n--;
    }
    for(i = 0; i < 16; ++i){
        printf("%lld", b[i]);
    }
    /*k = 0;
    while(k < m * n){
    for(i = 0; i < n; ++i){
        for(j = 0; j < n; ++j){
            printf("%lld", b[k]);
            k++;
        }
        printf("\n");
    }
    }*/
    return 0;
}