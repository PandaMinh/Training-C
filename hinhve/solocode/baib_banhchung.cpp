#include<stdio.h>

int main(){
    long long t, h, h1, h2, h3;
    scanf("%lld", &t);
    while(t--){
        scanf("%lld", &h);
        if(h%3 == 0){
            h1 = h/3 + 1;
        }
        else{
            h1 = h/3 + 2;
        }
        if(h- h1 - (h1 - 1) > 0){
            h2 = h1 - 1;
            h3 = h - h1 - h2;
        } else if(h - h1 - (h1 - 2) > 0){
            h2 = h1 - 2;
            h3 = h - h1 - h2;
        }
        printf("%lld %lld %lld\n", h2, h1, h3);
    }
    return 0;
}