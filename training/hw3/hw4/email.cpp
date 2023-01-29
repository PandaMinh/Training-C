#include<stdio.h>
#include<string.h>

int main(){
	int t;
	scanf("%d ", &t);
	while(t--){
        int l = 0;
		scanf("\n");
        char name[10005];
		gets(name);
        char xaumoi[10005];
		int n;
		n = strlen(name);
		for(int i = 0; i < n; ++i){
            if(name[i] >= 65 && name[i] <= 90){
                    name[i] = name[i] + 32;
                }
        }
        int k = 0;
        for(int j = n - 1; j >= 0; --j){
            if(name[j+1] >= 97 && name[j+1] <= 122 && name[j] ==' ') {
                l = j;
                break;
            }
            else if(name[j] >= 97 && name[j] <= 122){
                xaumoi[k] = name[j];
                k++;
            }
        }
        int m = strlen(xaumoi);
        for(int i = m-1; i >= 0; --i){
            printf("%c", xaumoi[i]);
        }
        for(int j = 0; j < l; ++j){
            if( j == 0 || (name[j-1] == ' ' && name[j] >= 97 && name[j] <= 122)){
                printf("%c", name[j]);
            }
        }
        printf("@itptit.edu.vn");
        printf("\n");
    }
    return 0;
}