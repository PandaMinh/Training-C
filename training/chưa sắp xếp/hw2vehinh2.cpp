#include<stdio.h>

int main(){
    long long i, j, n;
    scanf("%lld", &n);
    for(i=0; i<n; i++){
        for(j=0; j<=2*n-2; j++){
            if (j<= n-i-2 ||  j>=n+i){
                printf(" ");
            }
            else 
                printf("*");
        }
    printf("\n");
    }
    return 0;
}