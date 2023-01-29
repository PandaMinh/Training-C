#include<stdio.h>

int main(){
    int n, i, j, t = 0;
    scanf("%d", &n);
    for(i = 1; i <= n; ++i){
        for(j = 1; j <= n; ++j){
            t += 1;
            printf("%d ", t);
        }
        printf("\n");
    }
    return 0;
}