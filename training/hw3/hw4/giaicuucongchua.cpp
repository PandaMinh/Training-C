#include<stdio.h>
#include<string.h>

int main(){
    char name[1005];
    gets(name);
    int n = strlen(name);
    for( int i = n - 1; i >= 0; --i){
        printf("%c", name[i]);
    }
    return 0;
}