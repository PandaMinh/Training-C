#include<stdio.h>

int main(){
    long long t, n, k, i, sum, thuong;
    scanf("%lld", &t);
    while(t--){
        sum = 0;
        scanf("%lld %lld", &n, &k);
        /*for(i = 1; i <= n; ++i){
            if(i%k == 0){
                sum += i%10;
            }
        }*/
        thuong = n/k;
        for(i = 1; i <= thuong; ++i){
            sum += (k * i)%10;
        }
        printf("%lld\n", sum);
    }
    return 0;
}