#include<stdio.h>
#include<math.h>

int main(){
	long long t, n, j, b, m, check, i, dem;
	long long a[105][105] = {};
	scanf("%lld ", &t);
	while(t--){
		dem = 0;
		scanf("%lld ", &n);
		for(j = 0; j < n; j++){
			for(b = 0; b < n; b++){
				scanf("%lld", &a[j][b]);
				if(j == b){
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
					//printf("%d", check);
					if(check == 1){
						dem = dem + 1;
					}
				}
			}
		}
		printf("%lld", dem);
		printf("\n");
	}
	return 0;
}