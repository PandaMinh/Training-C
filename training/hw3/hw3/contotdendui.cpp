#include<stdio.h>

int main(){
    int n, i, j, hang = 0, cot = 0, test;
    int a[105][105] = {};
    scanf("%d", &n);
    for(i = 0; i < n; ++i){
        for(j = 0; j < n; ++j){
            scanf("%d", &a[i][j]);
            if(a[i][j] == 0){
                hang = i;
                cot = j;
            }
        }
    }
    for(i = 0; i < n; ++i){
        if(a[hang][i] == 1 || a[i][cot] == 1){
            test = 1;
            break;
        }
    }
    if(test == 1){
        printf("Yes");
    } else printf("No");
    return 0;
}