#include<stdio.h>
long long a[1005][1005] = {};

int main(){
    long long m, n, i, j, vang, i1, j1, max;
    //long long a[105][105] = {};
    scanf("%lld %lld", &m, &n);
    for(i = 1; i <= m; i++){
        for(j = 1; j <= n; j++){
            scanf("%lld", &a[i][j]);
        }
    }
    max = 0;
    i1 = 0;
    j1 = 0;
    for(i = 1; i <= m; i++){
        for(j = 1; j <= n; j++){
            vang = a[i][j] + a[i-1][j] + a[i+1][j] + a[i][j+1] + a[i][j-1];
            if(vang >= max){
                max = vang;
                i1 = i;
                j1 = j;
            }
        }
    }
    printf("%lld %lld\n%lld", i1, j1, max);
    return 0;
}