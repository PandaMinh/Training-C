#include<stdio.h>

int tn(int n){
	int nguoc = 0;
    int tam = n;
	while(n){
        nguoc = nguoc * 10 + n % 10;
        n /= 10;
    }
    if(nguoc == tam)
        return 1;
    else
        return 0;
}

int main(){
	int t;
    long long n, nguoc;
	scanf("%d", &t);
	while(t--){
		scanf("%lld", &n);
		if(tn(n) == 1){
            printf("YES\n");
        }else
            printf("NO\n");
    }
    return 0;
}