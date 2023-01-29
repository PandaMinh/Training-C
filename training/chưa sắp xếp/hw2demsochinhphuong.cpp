#include<stdio.h>
#include<math.h>

int main(){
    int n, a, b, a1, b1, a3;
    double a2;
    scanf("%d", &n);
    while(n--){
        scanf("%d %d", &a, &b);
        a1= (int) sqrt(a);
        b1= (int) sqrt(b);
        double a2= (double)sqrt(a);
        int a3= (int)(sqrt(a)*10);
        if(a3%10==0){
            printf("%d\n", b1-a1+1);
        }else printf("%d\n", b1-a1);
    }
    return 0;
}