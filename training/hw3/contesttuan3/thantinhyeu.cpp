#include<stdio.h>
#include<math.h>

int main(){
    int t, n, i, j, k, dem;
    int a[110] = {};
    scanf("%d", &t);
    while(t--){
        scanf("%d %d", &n, &k);
        dem = 0;
        for(i = 0; i < n; ++i){
            scanf("%d", &a[i]);
        }
        for(i = 0; i < n; ++i){
            for(j = i + 1; j < n; ++j){
                if(abs(a[i] - a[j]) < k){
                    dem += 1;
                }
            }
        }
        printf("%d\n", dem);
    }
    return 0;
}