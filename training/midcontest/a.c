#include<stdio.h>
#include<string.h>

int main(){
	int i , n1, n2;
	int lc = 1;
	int check;
	char a[100005] = {};
	char b[100005] = {};
	char c[10] = {};
	gets(a);
	scanf("\n");
	gets(b);
	scanf("\n");
	gets(c);
	if(c[0] == 'Y' && c[1] == 'e' && c[2] == 's'){
		check = 1;
	}
	else if(c[0] == 'N' && c[1] == 'o')
		check = 0;
	n1 = strlen(a);
	n2 = strlen(b);
	//printf("%d %d", n1, n2);
	for(i = 0; i < n1; i++){
		if(a[i] != b[i]){
			lc = 0;
			break;
		}
	}
	//printf("%d", lc);
	if(lc == 1 && check == 1){
		printf("Correct!");
	}
	else if(lc == 0 && check == 0) 
		printf("Correct!");
	else
		printf("Incorrect!");
	return 0;
}