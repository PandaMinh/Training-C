#include<stdio.h>

int main(){
	int n, i, j, k, l;
	scanf("%d", &n);
	for(i = 0; i < n; ++i){
		for(j = 0; j < 2 * n - 1; ++j){
			if(j < i) printf("%d ", n - j);
			else if(j > 2 * n - 2 - i) printf("%d ", j - n + 2);
			else printf("%d ", n - i);
		}
		printf("\n");
	}
	for(k = n - 2; k >= 0; --k){
		for(l = 0; l < 2 * n - 1; ++l){
			if(l < k) printf("%d ", n - l);
			else if(l > 2 * n - 2 - k) printf("%d ", l - n + 2);
			else printf("%d ", n - k);
		}
		printf("\n");
	}
	return 0;
}
