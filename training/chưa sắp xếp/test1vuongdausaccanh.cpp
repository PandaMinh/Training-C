#include<stdio.h>

int main(){
    long long x1, y1, x2, y2, x3, y3, x4, y4;
    scanf("%lld %lld %lld %lld %lld %lld", &x1, &y1, &x2, &y2, &x3, &y3);
    if((x1-x2)*(x3-x2)+(y1-y2)*(y3-y2)==0){
        x4= x3-x2+x1;
        y4= y3-y2+y1;
        printf("%lld %lld", x4, y4);
    } else if((x2-x1)*(x3-x1)+(y2-y1)*(y3-y1)==0){
        x4= x2+x3-x1;
        y4= y2+y3-y1;
        printf("%lld %lld", x4, y4);
    } else if((x1-x3)*(x2-x3)+(y1-y3)*(y2-y3)==0){
        x4= x1+x2-x3;
        y4= y1+y2-y3;
        printf("%lld %lld", x4, y4);
    }
    return 0;
}