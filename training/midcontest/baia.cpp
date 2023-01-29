	#include<stdio.h>
	#inlcude<math.h>
	
	int main(){
	
		
		long long dem = 0, n;
		scanf("%lld ", &n);
		for(j = 0; j < n; j++){
			for(b = 0; b < n; b++){
				scanf("%lld", &a[j]);
			}
		}
		for(j = 0; j < n; j++){
			check = 1;
			if(a[j][j] < 2) check = 0;
			else{
				m = sqrt(a[j][j]);
				for(i = 2; i <= m; i++){
					if(a[j][j]%i==0){
					check = 0;
					break;
					}
				}
			}
			printf("%d", check);