#include<stdio.h>

int main(){
    long long t, n, g=1;
    scanf("%lld\n", &t);
    for(long long i=1; i<t+1; i++){
        scanf("%lld\n", &n);
        for(long long j=1; j<=n; j++){
            g=g*j;
            printf("%lld\n", g);
        }
    }
    
    return 0;
}