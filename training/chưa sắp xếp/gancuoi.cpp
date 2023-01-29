#include<stdio.h>
#include<math.h>

int main(){
int x1, y1, x2, y2, x3, y3, x4, y4, t1, h1, t2, h2, t3, h3, t4, h4, d1, d2, nho1, lon1, nho2, lon2;
scanf("%d %d %d %d\n%d %d %d %d", &x1, &x1, &x2, &y2, &x3, &y3, &x4, &y4);
t1= x1+x3;
h1=abs(x1-x3);
nho1=(t1-h1)/2;

t2=x2+x4;
h2=abs(x2-x4);
lon1=(t2+h2)/2;

t3=y1+y3;
h3=abs(y1-y3);
nho2=(t3-h3)/2;

t4=y2+y4;
h4=abs(y2-y4);
lon2=(t4+h4)/2;

d1=abs(nho1-lon1);
d2=abs(lon2-nho2);

if(d1>d2){
    if(d1%2==0){
    printf("%d", d1*d1);
    printf("\nhoa hong");
    }

    else{
    printf("%d", d1*d1);
    printf("\ngo huong");
    }
} else{
    if(d2%2==0){
    printf("%d", d2*d2);
    printf("\nhoa hong");
    }

    else{
    printf("%d", d2*d2);
    printf("\ngo huong");
}}
    return 0;


}