#include<stdio.h>

int main(){
	int n, i, j, k;
	scanf("%d", &n);
	for(i = 1; i <= n; i++){
		for(j = 1; j <= n - i; j++){
			printf(" ");
		}
		for(k = n - i + 1; k <= n; ++k){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}