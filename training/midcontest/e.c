#include<stdio.h>
#include<string.h>

int main(){
	long long t, m, i, j;
	scanf("%lld", &t);
	char n[100005] = {};
	while(t--){
		int k = 0;
		int max1, max2, max3, max4;
		scanf("%lld", &n);
		gets(n);
		m = strlen(n);
		max1 = n[0];
		for(i = 1; i <n; i++){
			if(n[i-1] = ' ' && max < n[i]){
				max1 = n[i];
			}
		}
		printf("\n");
	}
	return 0;
}