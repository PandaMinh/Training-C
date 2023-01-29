#include<stdio.h>
#include<string.h>

int main(){
    int t, n, k;
    char xau[1005], x;
    scanf("%d", &t);
    scanf("\n");
    while(t--){
        scanf("\n");
        gets(xau);
        n = strlen(xau);
        scanf("\n");
        scanf("%c", &x);
        scanf("\n");
        scanf("%d", &k);
        for(int i = 0; i < k; ++i){
            printf("%c", xau[i]);
        }
        printf("%c", x);
        for(int i = k; i < n; ++i){
            printf("%c", xau[i]);
        }
        printf("\n");
    }
    return 0;
}