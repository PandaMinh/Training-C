#include<stdio.h>

int main(){
    int t;
    long long n, tien, son;
    scanf("%d", &t);
    while(t--){
        scanf("%lld", &n);
        tien = 0;
        son = 0;
        while(n > 0){
            if(n%2 == 0){
                tien += n/2;
                n = n/2;
                //printf("%lld %lld\n", tien, n);
                if(n%2 == 0){
                    son += n/2;
                    n = n/2;
                    //printf("%lld %lld\n", son, n);
                }
                else{
                    son += 1;
                    n = n - 1;
                    //printf("%lld %lld\n", son, n);
                }
            } else if(n%2 == 1){
                tien += 1;
                n = n - 1;
                //printf("%lld %lld\n", tien, n);
                if(n%2 == 0){
                    son += n/2;
                    n = n/2;
                    //printf("%lld %lld\n", son, n);
                }
                else{
                    son += 1;
                    n = n - 1;
                   // printf("%lld %lld\n", son, n);
                }
            }
            
        }
        //printf("%lld %lld\n", tien, son);
        if(tien > son){
            printf("%lld ", tien);
            printf("anh Tien\n");
        }
        else if(tien == son){
            printf("%lld ", tien);
            printf("none\n");
        }
        else if(son > tien){
            printf("%lld ", tien);
            printf("em Son\n");
        }
    }
    return 0;
}