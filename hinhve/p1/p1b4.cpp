#include<stdio.h>

int main(){
	int d, c, i, j;
	scanf("%d %d", &d, &c);
	for(i = 1; i <= d; i++){
		for(j = 1; j <= c; j++){
			if(i == 1 || i == d)
				printf("*");
			else 
				if(j == 1 || j == c)
					printf("*");
				else
					printf("~");
		}
	printf("\n");
	}
	return 0;
}