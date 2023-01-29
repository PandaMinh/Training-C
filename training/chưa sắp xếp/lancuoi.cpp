#include<stdio.h>

int main(){
	long long a, b, a6, b6, a8, b8, a10, b10, a24, b24, a30, b30, a40, b40, a120, b120, e1, e2, e3, e4, e5, e6, e7, t;
	scanf("%lld %lld", &a, &b);
	a6= a/6;
	b6=b/6;
	a8=a/8;
	b8=b/8;
	a10=a/10;
	b10=b/10;
	a24=a/24;
	b24=b/24;
	a30=a/30;
	b30=b/30;
	a40=a/40;
	b40=b/40;
	a120=a/120;
	b120=b/120;
	if(b>=a){
		if(a%6==0)
			e1=b6-a6+1;
		else
		    e1=b6-a6;
		if(a%8==0)
			e2=b8-a8+1;
		else
		    e2=b8-a8;
		if(a%10==0)
			e3=b10-a10+1;
		else
		    e3=b10-a10;
		if(a%24==0)
			e4=b24-a24+1;
		else
		    e4=b24-a24;
		if(a%30==0)
			e5=b30-a30+1;
		else
		    e5=b30-a30;
		if(a%40==0)
			e6=b40-a40+1;
		else
		    e6=b40-a40;
		if(a%120==0){
			e7=b120-a120+1;}
		else{
		    e7=b120-a120;}
		
		t= e1+e2+e3-e4-e5-e6+e7;
		printf("%lld", t);}
		
		else{
		if(b%6==0)
			e1=a6-b6+1;
		else
		    e1=a6-b6;
		if(b%8==0)
			e2=a8-b8+1;
		else
		    e2=a8-b8;
		if(b%10==0)
			e3=a10-b10+1;
		else
		    e3=a10-b10;
		if(b%24==0)
			e4=a24-b24+1;
		else
		    e4=a24-b24;
		if(b%30==0)
			e5=a30-b30+1;
		else
		    e5=a30-b30;
		if(b%40==0)
			e6=a40-b40+1;
		else
		    e6=a40-b40;
		if(b%120==0){
			e7=a120-b120+1;}
		else{
		    e7=a120-b120;}
		
		t= e1+e2+e3-e4-e5-e6+e7;
		printf("%lld", t);
		}
	return 0;
	}