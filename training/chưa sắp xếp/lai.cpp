#include<stdio.h>

int main(){
	long long n, a, b, c;
	double lai, b1;
	scanf("%lld", &n);
	while(n>=1){
		scanf("%lld %lld %lld", &a, &b, &c);
		double lai = (double)(a*b*c)/100;
		printf("%g\n", lai);
		n--;}
	return 0;
}