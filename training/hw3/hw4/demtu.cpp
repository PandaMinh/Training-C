#include<stdio.h>
#include<string.h>

int main(){
    int t, n;
    scanf("%d ", &t);
    while(t--){
        int dem = 0;
        scanf("\n");
        char xau[10005] = {};
        gets(xau);
        n = strlen(xau);
        for(int i = 0; i < n; i++){
            if(xau[i - 1] == ' ' && xau[i] != ' '){
                dem++;
            }
        }
        printf("%d\n", dem + 1);
    }
    return 0;
}