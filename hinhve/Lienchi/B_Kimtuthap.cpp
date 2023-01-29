#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        int k = i;
        int m = 2*i - 2;
        for(int j = 1; j < n + 1 - i; j++){
            printf("  ");
        }
        for(int j = n + 1 - i; j <= n + i - 1; j++){
            if(j <= n){
                printf("%d ", k);
                k++;
            }
            if(j > n){
                printf("%d ", m);
                m--;
            }
        }
        printf("\n");
    }
    return 0;
}