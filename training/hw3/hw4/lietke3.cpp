#include<stdio.h>
#include<string.h>

int main(){
    int t, n1, n2, m;
    scanf("%d ", &t);
    while(t--){
        int lc;
        char xau1[10005];
        char xau2[1005];
        char b[10005] = {};
        int c[10005] = {};
        gets(xau1);
        scanf("\n");
        gets(xau2);
        n1 = strlen(xau1);
        n2 = strlen(xau2);
        int k = 0;
        for(int i = 0; i < n1; i++){
            for(int j = 0; j < n2; j++){
                if(xau1[i] == xau2[j] && xau1[i] != ' '){
                    b[k] = xau1[i];
                    k++;
                }
            }
            b[(int)xau[i]]++;
        }
        m = k - 1;
        lc = 0;
        for(int i = 0; i < n1; i++){
            for(int j = 0; j < m; j++){
                if(xau1[i] == b[j]){
                    lc = 1;
                    break;
                }
            }
            if(lc == 0 && b[(int)xau1[i]] > 0){
                printf("%c", xau1[i]);
                b[(int)xau1[1]] = 0;
            }
        }
        lc = 0;
        for(int i = 0; i < n2; i++){
            for(int j = 0; j < m; j++){
                if(xau2[i] == b[j]){
                    lc = 1;
                    break;
                }
            }
            if(lc == 0){
                printf("%c", xau2[i]);
                
            }
        }
        printf("\n");
    }
    return 0;
}