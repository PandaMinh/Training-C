#include<stdio.h>

int main(){
    int n, p;
    long long x;
    scanf("%d\n", &n)
    int day[n];
    for(int i=0; i<n; ++i){
        scanf("%lld ", &day[i]);
    }
    scanf("\n%lld\n%d", &x, &p);
    for(int j=p; j<n+1; ++j){
        day[j]=day[j-1];
    }
    day[p-1]=x;
    for( int k=0; k<n+1; ++k){
        printf("%lld", day[k]);
    }
    return 0;
}