#include<stdio.h>
#include<math.h>

int main(){
	int a,b,c,t1,h1,l1,b1,t2,h2,lon,be;
	scanf("%d %d %d", &a, &b, &c);
	
	t1=a+b;h1=abs(a-b);
	
	l1=(t1+h1)/2; b1=(t1-h1)/2;
	
	t2=c+l1; h2=abs(c-l1);
	
	lon=(t2+h2)/2; be=(t2-h2)/2;
	
	printf("%d%d",lon,be);
	return 0;
	
}