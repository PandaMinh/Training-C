#include<stdio.h>

int main(){
	int n; scanf("%d", &n);
	for(int i = n; i >= 1; --i){
		for(int j = 1; j <= n; ++j){
            if(i == 1) printf("*");
            else{
                if(j < i) printf("~");
                else if(j == i || j == n) printf("*");
                else printf(" ");
            }
        }
        printf("\n");
	}
	return 0;
}