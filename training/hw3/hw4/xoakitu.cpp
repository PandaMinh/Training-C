#include<stdio.h>
#include<string.h>

int main(){
    int t, n;
    char x, xau[10005];
    scanf("%d", &t);
    while(t--){
        scanf("\n");
        gets(xau);
        scanf("\n");
        scanf("%c", &x);
        n = strlen(xau);
        for(int i = 0; i < n; i++){
		    if(xau[i] != (int)x){
                printf("%c", xau[i]);
            }
        }
        printf("\n");
    }
    return 0;
}