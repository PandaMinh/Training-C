#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, k, m;
        int i;
        int a[100005] = {};
        scanf("%d", &n);
        for(i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        for(i = 0; i < n; i++){
            if(a[i] == 0){
                k = a[i];
                m = i;
                a[i] = 1;
                break;
            }
        }
        int dem = 0;
        for(i = 0; i < n; i++){
            for(int j = 1; j < n; j++){
                if(i < j && a[i] > a[j]){
                    dem++;
                }
            }
        }
        a[m] = k;
        for(i = n-1; i >= 0; i--){
            if(a[i] == 1){
                a[i] = 0;
                break;
            }
        }
        int cnt = 0;
        for(i = 0; i < n; i++){
            for(int j = 1; j < n; j++){
                if(i < j && a[i] > a[j]){
                    cnt++;
                }
            }
        }
        if(dem >= cnt){
            printf("%d\n", dem);
        }
        else printf("%d\n", cnt);
    }
    return 0;
}