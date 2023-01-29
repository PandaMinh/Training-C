#include<stdio.h>

int main(){
    int n, i, j, t = 2, max;
    scanf("%d", &n);
    for(i = 1; i <= n; ++i){
        t = 2;
        for(j = 1; j <= i; ++j){
            printf("%c", t + 62);
            t = t + 2;
        }
        max = t - 4;
        for(j = i + 1; j < 2 * i; ++j){
            printf("%c", max + 62);
            max = max - 2;
        }
        printf("\n");
    }
    return 0;
}