#include<stdio.h>
#include<string.h>

int main(){
    char name[10005];
    gets(name);
    int n = strlen(name);
    int dem1 = 0, dem2 = 0, dem3 = 0;
    for(int i = 0; i < n; ++i){
        if(name[i] >= 48 && name[i] <= 57){
            dem2 += 1;
        }
        else if((name[i] >= 65 && name[i] <= 90) || (name[i] >= 97 && (name[i] <= 122))){
            dem1 += 1;
        }
        else
            dem3 += 1;
    }
    printf("%d\n%d\n%d", dem1, dem2, dem3);
    return 0;
}