#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n + i - 1; ++j){
            if(i < n){
                if(j == n + i -1 || j == n + 1 - i){
                    printf("*");
                }
                else 
                    printf(" ");
            }
            else 
                printf("*");
        }
        printf("\n");
    }
    return 0;
}