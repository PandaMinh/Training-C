#include<stdio.h>
#include<math.h>

int main(){
    long long x1, y1, x3, y3, x11, y11, x33, y33, d1, d2, d3, tich1, tich2, tich3;
    scanf("%lld %lld %lld %lld\n%lld %lld %lld %lld", &x1, &y1, &x3, &y3, &x11, &y11, &x33, &y33);
    if(x11>=x1){
        d1= abs(x33-x1);
        d2= abs(y11-y33);
        tich1= d1 * d1;
        tich2= d2 * d2;
        if(d1>=d2){
            if(d1%2==0) printf("%lld\nhoa hong", tich1);
            else printf("%lld\ngo huong", tich1);
        } else{
            if(d2%2==0) printf("%lld\nhoa hong", tich2);
            else printf("%lld\ngo huong", tich2);
        }

    else if(x11>x1&& x33<x3){
        d1= abs(x3-x1);
        d2= abs(y1-y3);
        d3= abs(y11-y33);
        tich1= d1 * d1;
        tich2= d2 * d2;
        tich3= d3 * d3;
        if(d1>d2 && d1> d3){
            if(d1%2==0) printf("%lld\nhoa hong", tich1);
            else printf("%lld\ngo huong", tich1);
        } else if(d2>d1 && d2>d3){
            if(d2%2==0) printf("%lld\nhoa hong", tich2);
            else printf("%lld\ngo huong", tich2);
        }else if(d3>d1 && d3>d2){
            if(d3%2==0) printf("%lld\nhoa hong", tich3);
            else printf("%lld\ngo huong", tich3);
        }
    }
    
    
    
    else if(x11>=x1){
            d1= abs(x33-x1);
            d2= abs(y11-y3);
            tich1= d1 * d1;
            tich2= d2 * d2;
            if(d1>d2 && d1%2==0){
                printf("%lld\nhoa hong", tich1);
            }else if(d1>d2 && d1%2!=0){
                printf("%lld\ngo huong", tich1);
            }else if(d2>d1 && d2%2==0){
                printf("%lld\nhoa hong", tich2);
            }else if(d2>d1 && d2%2!=0){
                printf("%lld\ngo huong", tich2);
            }
    }else if(x1>x11){
        d1= abs(x3-x11);
        d2= abs(y1-y33);
        tich1= d1 * d1;
        tich2= d2 * d2;
        if(d1>d2 && d1%2==0){
                printf("%lld\nhoa hong", tich1);
            }else if(d1>d2 && d1%2!=0){
                printf("%lld\ngo huong", tich1);
            }else if(d2>d1 && d2%2==0){
                printf("%lld\nhoa hong", tich2);
            }else if(d2>d1 && d2%2!=0){
                printf("%lld\ngo huong", tich2);
            }
    }
    return 0;
}