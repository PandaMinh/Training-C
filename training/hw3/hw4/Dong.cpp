#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
        char a[10005], c[5];
		fgets(c,5,stdin);
 	    fgets(a,10005,stdin);
		int dem = 0;
		for(int i=0;i<strlen(a)-1;i++){
			if(c==a[i]) dem++;
		}
		printf("%d", dem);
		printf("\n");
	}
    return 0;
}