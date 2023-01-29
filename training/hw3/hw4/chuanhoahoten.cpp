#include<stdio.h>
#include<string.h>

int main(){
	int t;
	scanf("%d", &t);
	char name[100005];
    scanf("\n");
	while(t--){
		scanf("\n");
		gets(name);
		int n;
		n = strlen(name);
		for(int i = 0; i < n; ++i){
			if(i == n - 1 && name[i] == ' '){
				printf(" ");
			}
            if(name[i] >= 65 && name[i] <= 90){
                    name[i] = name[i] + 32;
                }
			if(i == 0 && name[i] >= 97){
				name[0] = name[0] - 32;
                printf("%c", name[i]);
			}
			else if(name[i-1] == ' ' && name[i] >= 97){
				name[i] = name[i] - 32;
                printf(" %c", name[i]);
			}
            if(name[i] != ' ' && (name[i] > 90 || name[i] < 65)){
                printf("%c", name[i]);
            }
        }
        //printf("%c", name[0]);
        printf("\n");
	}
	return 0;
}