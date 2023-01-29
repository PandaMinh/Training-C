#include<stdio.h>

int main(){
    int n, max, max1;
    scanf("%d", &n);
    int a[10005] = {};
    int b[10005] = {};
    for(int i = 0; i < n; ++i){
        scanf("%d", &a[i]);
        b[a[i]]++;
    }
    max = 0;
    for(int j = 1; j <= 1005; ++j){
        if(max < b[j]){
            max = b[j];
        }
    }
    //printf("%d\n", max);
    for(int j = 1; j <= 1005; ++j){
        if(b[j] == max){
            b[j] = 0;
        }
    }
    max1 = 0;
    for(int j = 1; j <= 1005; ++j){
        if(max1 < b[j]){
            max1 = b[j];
        }
    }
    //printf("%d\n", max1);
    for(int j = 1; j <= 1005; ++j){
        if(b[j] == max1){
            printf("%d\n", j);
            break;
        }
    }
    return 0;
}