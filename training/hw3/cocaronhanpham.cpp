#include<stdio.h>

int main(){
    int t, n, k, i, j, cnt, X; O;
    int a[i][j];
    scanf("%d", &t);
    while(t--){
        scanf("%d %d", &n, &k);
        for(i = 0; i < n; ++i){
            for(j = 0; j < n; ++j){
                scanf("%d", &a[i][j]);
            }
        }
        for(i = 0; i < n; ++i){
            cnt = 1;
            for(j = 0; j < n; ++j){
                if(a[i][j] == 1){
                    cnt++;
                }
                else break;
            }
            if(cnt == k){
                X = 1;
            }
        }

    }
    return 0;
}