#include<stdio.h>

int main(){
    long long n, a, k;
    scanf("%lld %lld", &n, &a);
    for(long long i = 1; i < n; i++){
        k = i;
        long long max = 4;
        while(k != 1){
            if(k%2 == 0){
                k = k/2;
            }
            else{
                k = k * 3 + 1;
            }
            if(k >= max)
                max = k;
        }
        if(max >= a){
            printf("%lld ", i);
        }
    }
    return 0;
}