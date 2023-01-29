#include<stdio.h>

int main(){
	int n, i, j;
	scanf("%d", &n);
	for(i=0; i<n; ++i){
		for(j=0; j<n; ++j){
			if(j<=i)
				printf("%d", i-j+1);
			else
				printf("%d", j-i+1);
		}
	 	printf("\n");
	}
	return 0;
	
}
