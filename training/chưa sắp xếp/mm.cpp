#include<stdio.h>

int main(){
	long long tF;
	double tC;
	scanf("%lld", &tF);
	tC= 5*(tF-32)/9;
	if((tF-32)%9!=0)
	printf("%.2lf", tC);
	else
	printf("%.0lf", tC);
	
	return 0;
	}