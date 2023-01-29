#include<stdio.h>
#include<math.h>

int main(){
    int n, i, j, k = 0; 
    int test = 0;
    scanf("%d", &n);
    int a[1230] = {};
    for(i = 2; i <= 9973; ++i){
        int kt = 1;
        if(i < 2)  {kt = 0;}
        else{
            for(j = 2; j <= sqrt(i); ++j){
                if(i%j == 0){
                    kt = 0;
                    break;
                }
            }
        }
        if(kt == 1){
            a[k] = i;
            k++;
        }
    }
    /*for( k = 0; k <= 1228; k++){
        printf("%d ", a[k]);
    }*/
    for(j = 0; j <= 1228; ++j){
        for(i = 1228; i >= 0; --i){
            if(n - a[j] == a[i] && a[i] != 0 && a[j] < a[i]){
                test = 1;
                printf("%d %d\n", a[j], a[i]);
                break;
            }
        }
    }
    if(test == 0){
        printf("%d", n);
    }
    return 0;
}