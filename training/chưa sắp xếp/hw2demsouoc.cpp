#include<stdio.h>

int main(){
    int t, n, dem=0;
    scanf("%d", &t);
    while(t--){
        dem=0;
        scanf("%d", &n);
        for(int i=1; i<=n; ++i){
            if(n%i==0){
                dem= dem+1;
        }
        
        }printf("%d\n", dem);
        for(int i=1; i<=n; ++i){
             if(n%i==0)
             printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}