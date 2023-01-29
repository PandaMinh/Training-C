#include<stdio.h>
#include<string.h>

int main(){
    int t, n, dem;
    char x, xau[10005];
    scanf("%d", &t);
    while(t--){
        scanf("\n");
        dem = 0;
        scanf("%c", &x);
        scanf("\n");
        gets(xau);
        n = strlen(xau);
        for(int i = 0; i < n; i++){
		    if(xau[i] == x)
                dem += 1;
        }
        printf("%d\n", dem);
    }
    return 0;
}