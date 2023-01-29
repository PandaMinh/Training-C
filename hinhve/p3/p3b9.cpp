#include<stdio.h>

int main(){
	int n, i, j;
	int kmax = 0;
	scanf("%d", &n);
	for(i = 1; i <= n; ++i){
		kmax = kmax + i;
		for(j = 1; j <= i; ++j){
			if(i%2 != 0){
				printf("%c ", kmax - i + j + 96);
			}
			else{
				printf("%c ", kmax + 1 - j + 96);
			}
		}
		printf("\n");
	}
	return 0;
}