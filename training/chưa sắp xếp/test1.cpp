#include<stdio.h>

long long ucln(long long a, long long b){
    long long du;
    while(b!=0){
        du=a%b;
        a=b;
        b=du;
    } return a;
}
int main(){
    int t;
    long long a, b;
    scanf("%d", &t);
    while(t--){
        scanf("%lld %lld", &a, &b);
        printf("%lld\n", ucln(a, b));
    }
return 0;
}