#include<stdio.h>
#include<string.h>

int main(){
	char n[1000005] = {};
	long long m;
	gets(n);
	m = strlen(n);
	if(m < 75){
		printf("4");
	}
	else printf("7");
	return 0;
}