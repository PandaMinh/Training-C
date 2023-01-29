#include<stdio.h>
#include<math.h>

int main(){
    long long t, a, b, i, j, dem, cnt, lc, n;
    scanf("%lld", &t);
    while(t--){
        cnt = 0;
        scanf("%lld %lld", &a, &b);
        for(i = a; i <= b; i++){
            n = sqrt(i);
            lc = 1;
            if(i < 2) lc = 0;
            else if(i > 2){
                for(int j = 2; j <= n; j++){
                    if(i % j == 0){
                        lc = 0;
                        break;
                    }
                }
            }
            if(lc == 1){
                cnt++;
            }
        }
        printf("%lld\n", cnt);
    }
    return 0;
}