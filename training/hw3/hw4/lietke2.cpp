#include<stdio.h>
#include<string.h>

int main(){
    int t, n;
    scanf("%d ", &t);
    while(t--){
        int b[10005] = {};
        char xau[10005];
        gets(xau);
        n = strlen(xau);
        for(int i = 0; i < n; i++){
            b[xau[i]]++;
        }
        int lc = 0;
        for(int i = 0; i < 300; i++){
            if(b[xau[i]] > 1){
                lc = 1;
                printf("%c %d\n", xau[i], b[xau[i]]);
                b[xau[i]] = 0;
            }
        }
        if(lc == 0){
            printf("-1\n");
        }
    }
    return 0;
}