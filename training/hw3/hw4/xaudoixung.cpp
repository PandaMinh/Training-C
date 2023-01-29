#include<stdio.h>
#include<string.h>

int main(){
    int t, n, check = 1;
    char xau[1005];
    scanf("%d", &t);
    scanf("\n");
    while(t--){
        check = 1;
        scanf("%s", &xau);
        n = strlen(xau);
        for(int i = 0; i < n/2; ++i){
            if(xau[i] != xau[n-i-1]){
                check = 0;
                break;
            }
        }
        if(check == 0)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}