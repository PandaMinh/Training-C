#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    long long n, i, j;
    long long a[105][105];
    long long sum[250];
    while(t--){
        scanf("%lld", &n);
        long long max, tong = 0;
        for(i = 0; i < n; ++i){
            for(j = 0; j < n; ++j){
                scanf("%lld", &a[i][j]);
                tong += a[i][j];
            }
        }
        //printf("%lld", tong);
        for(i = 0; i < n; ++i){
            sum[i] = 0;
            for(j = 0; j < n; ++j){
                sum[i] += a[i][j]; 
            }
         }
        for(j = 0; j < n; ++j){
            sum[n+j] = 0;
            for(i = 0; i < n; ++i){
                sum[n + j] += a[i][j];
            }
        }
        max= 0;
        for(i = 0; i < 2 * n; ++i){
            if(max < sum[i]){
                max = sum[i];
            }
        }
        printf("%lld\n", max * n - tong);
    }
    return 0;
}