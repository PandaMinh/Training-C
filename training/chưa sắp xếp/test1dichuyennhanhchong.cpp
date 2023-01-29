#include<stdio.h>

int main(){
    long long a, b, a6, a8, a10, a24, a30, a40, a120, b6, b8, b10, b24, b30, b40, b120, t, e1, e2, e3, e4, e5, e6, e7;
    scanf("%lld &lld", &a, &b);
    
    
        if(a%6==0) e1= b/6- a/6+1;
        else e1=b/6-a/6;

        if(a%8==0) e2= b/8- a/8+1;
        else e2=b/8-a/8;

        if(a%10==0) e3= b/10- a/10+1;
        else e3=b/10-a/10;

        if(a%24==0) e4= b/24- a/24+1;
        else e4=b/24-a/24;

        if(a%30==0) e5= b/30- a/30+1;
        else e5=b/30-a/30;

        if(a%40==0) e6= b/40- a/40+1;
        else e6=b/40-a/40;
            
        if(a%120==0) e7= b/120- a/120+1;
        else e7=b/120-a/120;

        t=e1+e2+e3-e4-e5-e6+e7;
        printf("%lld", t);
   
    return 0;
}