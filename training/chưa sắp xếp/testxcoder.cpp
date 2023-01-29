#include<stdio.h>

int main(){
    long long a, b, a6, a8, a10, a24, a30, a40, a120, b6, b8, b10, b24, b30, b40, b120, t, t6;
    long long e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14;
    scanf("%lld &lld", &a, &b);
    a6= a/6; b6=b/6;
    a8= a/8; b8=b/8;
    a10= a/10; b10=b/10;
    a24= a/24; b24=b/24;
    a30= a/30; b30=b/30;
    a40= a/40; b40=b/40;
    a120=a/120; b120=b/120;
    if(b>=a){
        
        if(a%120==0){
            e1= b6- a6+1;
            e2= b8-a8+1;
            e3= b10-a10 +1;
            e4= b24-a24+1;
            e5= b30-a30+1;
            e6=b40-a40+1;
            e7=b120-a120+1;
            t= e1+e2+e3-e4-e5-e6+e7;
        }else if(a%40==0){
            e1=b6-a6;
            e2= b8-a8+1;
            e3= b10-a10 +1;
            e4= b24-a24;
            e5= b30-a30;
            e6=b40-a40+1;
            e7=b120-a120;
            t= e1+e2+e3-e4-e5-e6+e7;
        }else if(a%30==0){
            e1= b6- a6+1;
            e2= b8-a8;
            e3= b10-a10 +1;
            e4= b24-a24;
            e5= b30-a30+1;
            e6=b40-a40;
            e7=b120-a120;
            t= e1+e2+e3-e4-e5-e6+e7;
        }else if(a%10){
            e1= b6- a6;
            e2= b8-a8;
            e3= b10-a10 +1;
            e4= b24-a24;
            e5= b30-a30;
            e6=b40-a40;
            e7=b120-a120;
            t= e1+e2+e3-e4-e5-e6+e7;
        }else if(a%8){
            e1= b6- a6;
            e2= b8-a8+1;
            e3= b10-a10;
            e4= b24-a24;
            e5= b30-a30;
            e6=b40-a40;
            e7=b120-a120;
            t= e1+e2+e3-e4-e5-e6+e7;
        }else if(a%6){
            e1= b6- a6+1;
            e2= b8-a8;
            e3= b10-a10;
            e4= b24-a24;
            e5= b30-a30;
            e6=b40-a40;
            e7=b120-a120;
            t= e1+e2+e3-e4-e5-e6+e7;
        }}
    else{
        if(b%120==0){
            e1= a6- b6+1;
            e2= a8-b8+1;
            e3= a10-b10 +1;
            e4= a24-b24+1;
            e5= a30-b30+1;
            e6=a40-b40+1;
            e7=a120-b120+1;
            t= e1+e2+e3-e4-e5-e6+e7;
        }else if(b%40==0){
            e1=a6-b6;
            e2= a8-b8+1;
            e3= a10-b10 +1;
            e4= a24-b24;
            e5= a30-b30;
            e6=a40-b40+1;
            e7=a120-b120;
            t= e1+e2+e3-e4-e5-e6+e7;
        }else if(b%30==0){
            e1= a6- b6+1;
            e2= a8-b8;
            e3= a10-b10 +1;
            e4= a24-b24;
            e5= a30-b30+1;
            e6=a40-b40;
            e7=a120-b120;
            t= e1+e2+e3-e4-e5-e6+e7;
        }else if(b%10){
            e1= a6- b6;
            e2= a8-b8;
            e3= a10-b10 +1;
            e4= a24-b24;
            e5= a30-b30;
            e6=a40-b40;
            e7=a120-b120;
            t= e1+e2+e3-e4-e5-e6+e7;
        }else if(b%8){
            e1= a6- b6;
            e2= a8-b8+1;
            e3= a10-b10;
            e4= a24-b24;
            e5= a30-b30;
            e6=a40-b40;
            e7=a120-b120;
            t= e1+e2+e3-e4-e5-e6+e7;
        }else if(b%6){
            e1= a6- b6+1;
            e2= a8-b8;
            e3= a10-b10;
            e4= a24-b24;
            e5= a30-b30;
            e6=a40-b40;
            e7=a120-b120;
            t= e1+e2+e3-e4-e5-e6+e7;
        }

    }
    return 0;
}