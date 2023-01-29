#include<stdio.h>
#include<math.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[1005] = {};
    for(int i = 1; i <= n; i++){
        scanf("%d", &a[i]);
    }
    int min = abs(a[1] - a[2]);
    for(int i = 1; i <= n; i++){
        for(int j = i+1; j <= n; j++){
            int k = abs(a[j] - a[i]);
            if(min >= k){
                min = k;
            }
        }
    }
    printf("%d", min);
}