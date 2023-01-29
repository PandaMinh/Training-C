#include<stdio.h>

int main(){
    int n, i, j, t = 1, max;
    scanf("%d", &n);
    for(i = 1; i <= n; ++i){
        t = 1;
        for(j = 1; j <= n - i; ++j){
                printf("~");
        }
        for(j = n - i + 1; j <= n; ++j){
            printf("%d", t);
            t = t + 2;
        }
        max = t - 4;
        for(j = n + 1; j <= n + i - 1; ++j){
            printf("%d", max);
            max = max - 2;
        }
        printf("\n");
    }
    return 0;
}