#include<stdio.h>
#include<string.h>

int main(){
    int t, n, dem;
    scanf("%d", &t);
    char xau[10005];
    scanf("\n");
    while(t--){
        scanf("\n");
        gets(xau);
        n = strlen(xau);
        //printf("%d", n);
        for(int i = 0; i < n;){
            dem = 0;
            for(int j = i; j <= n; ++j){
                if(xau[i] == xau[j]){
                    dem += 1;
                }
                else{
                    printf("%c", xau[i]);
                    i = j;
                    if(dem > 1){
                        printf("%d", dem);
                    }
                    break;
                }
            }
        }
        printf("\n");
    }
    return 0;
}