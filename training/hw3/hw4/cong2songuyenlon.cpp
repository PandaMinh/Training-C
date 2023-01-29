#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
    int t, n1, n2, a, b, min, max;
    scanf("%d ", &t);
    while(t--){
        scanf("\n");
        char du;
        char xau1[10005] = {};
        char xau2[10005] = {};
        char xau[10005] = {};
        gets(xau1);
        scanf("\n");
        gets(xau2);
        n1 = strlen(xau1);
        n2 = strlen(xau2);
        max = (n1 + n2 + abs(n1 - n2))/2;
        //printf("%d\n", max);
        if(n1 > n2){
            for(int i = n1 -1; i >= 0; i--){
                if(i >= n1 - n2){
                    xau2[i] = xau2[i + n2 - n1];
                }
                else{
                    xau2[i] = 48;
                }
            }
        }
        else if(n2 > n1){
            for(int i = n2 -1; i >= 0; i--){
                if(i >= n2 - n1){
                    xau1[i] = xau1[i - n2 + n1];
                }
                else{
                    xau1[i] = 48;
                }
            }
        }
        // for(int i =0; i < max; i++){
        //     printf("%c", xau2[i]);
        // }
        du = 0;
        for(int i = max - 1; i >= 0; i--){
            xau[i] = ((int)xau1[i] + (int)xau2[i] + du - 48 * 2)%10;
            du = ((int)xau1[i] + (int)xau2[i] + du - 48 * 2)/10;
        }
        if(du != 0)
            printf("%d", du);
        for(int i = 0; i < max; i++){
            printf("%c", xau[i] + 48);
        }
        printf("\n");
    }
    return 0;
}