#include<stdio.h>

long long hh(long long n){
    int i;
    long long n, tong=0, tam=n;
    for(int i=1; i<n; ++i){
             if(n%i==0)
             tong= tong+i;
        }
    
    if(tong==tam){
        return 1;
    }else return 0;
    
}

int main(){
    long long t, n;
    scanf("%lld", &t);
    while(t--){
        scanf("%t", &n);
        if(hh(n)==1) printf("YES\n");
        if(hh(n)==0) printf("NO\n");
    }
    return 0;
}