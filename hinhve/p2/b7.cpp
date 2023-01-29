#include<stdio.h>

int main(){
	int n, i, j, k, l;
	scanf("%d", &n);
	for(i = 0; i < n; ++i){
		for(j = 0; j < n; ++j){
			if(j < i) printf("%d ", n - j);
			else printf("%d ", n - i);
		}
		printf("\n");
	}
	return 0;
}
