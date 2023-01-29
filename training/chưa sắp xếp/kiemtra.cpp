#include<stdio.h>
#include<math.h>

int main(){
	long long n, denta, x, them;
	scanf("%lld", &n);
	denta= 1+ 9*n;
	x= (long long)((-1+sqrt(denta))/2);
	if(x*(x+1)/2==n){
		printf("%lld", x);
	} else{
		them= (x+2)*(x+1)/2 - n;
		printf("%lld", them);
	}
	return 0;
}