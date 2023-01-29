#include<stdio.h>

int main(){
    int t, n, i, j;
    scanf("%d", &t);
    int a[105][105] = {};
    while(t--){
        scanf("%d", &n);
        for(i = 0; i < n; ++i){
            for(j = 0; j < n; ++j){
                scanf("%d", &a[i][j]);
                if(a[i][j] == 0){
                    a[i][j] = 1;
                }
                else if(a[i][j] == 1){
                    a[i][j] = 0;
                }
            }
        }
        /*for(i = 0; i < n; ++i){
        	for(j = 0; j < n; ++j){
        		printf("%d", a[i][j]);
			}
			printf("\n");
		}*/
        for(i = 0; i < n; ++i){
            printf("[");
            for(j = n - 1; j >= 0; --j){
            	if(j == 0)  
                    printf("%d", a[i][j]);
                else
                    printf("%d, ", a[i][j]);
            }
            if(i == n - 1){
                printf("]");
            }
            else if(i < n - 1)
                printf("], "); 
        }
        printf("\n");
    }
    return 0;
}