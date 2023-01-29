#include<stdio.h>

int main(){
	int n, i, j;
	int kmax = 0;
	scanf("%d", &n);
	for(i = 1; i <= n; ++i){
		kmax = kmax + i;
		for(j = 1; j <= i; ++j){
			if(i%2 != 0){
				printf("%d ", kmax - i +j);
			}
			else{
				printf("%d ", kmax + 1 - j);
			}
		}
		printf("\n");
	}
	return 0;
}