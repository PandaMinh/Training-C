#include<stdio.h>

int main(){
	double mon1, mon2, mon3, mon4, tb;
	scanf("%lf %lf %lf %lf", &mon1, &mon2, &mon3, &mon4);
	tb= (mon1 + mon2 + mon3 + mon4)/4;
	printf("%.1lf", tb);
	if (tb>=32./9){
		printf("\nXuat sac");
	}
	else if(tb>= 142./45){
		printf("\nGioi");
	}
	else if( tb>=2.75){
		printf("\nKha");
	}
	else printf("\nTach mat roi'");
	return 0;
	}