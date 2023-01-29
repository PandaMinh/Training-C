#include<stdio.h>

int main(){
	long long n, tongdu, d;
	scanf("%lld", n);
	d= n/10;
	if(n%10==1){
	tongdu= d*18+1;
	printf("%lld", tongdu);
	}
	else if(n%10==3){
	tongdu= d*18+4;
	printf("%lld", tongdu);
	}
	else if(n%10==6){
	tongdu= d*18+10;
	printf("%lld", tongdu);
	}
	else{
	tongdu= (d+1)*18;
	printf("%lld", tongdu);
	}
	return 0;
	}