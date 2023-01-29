#include<stdio.h>
#include<math.h>

int main(){
    double x1, y1, x2, y2, x3, y3, x4, y4;
    int t;
    double ab, bc, ac, ad, bd, cd, s1, s2, s3, s4, c1, c2, c3, c4;
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
    scanf("%d", &t);
    while(t--){
        scanf("%lf %lf", &x4, &y4);
        //điểm 1 là A, điểm 2 là B, điểm 3 là C, kiểm tra điểm 4 có thuộc tam giác ABC 
        //c1, c2, c3, c4 là chu vi tam giác ABD, ACD, BCD, ABC
        //s1, s2, s3, s4 ;à diện tích tam giác ABD, ACD, BCD, ABC
        ab = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
        bc = sqrt((x2-x3)*(x2-x3) + (y2-y3)*(y2-y3));
        ac = sqrt((x1-x3)*(x1-x3) + (y1-y3)*(y1-y3));
        ad = sqrt((x1-x4)*(x1-x4) + (y1-y4)*(y1-y4));
        bd = sqrt((x4-x2)*(x4-x2) + (y4-y2)*(y4-y2));
        cd = sqrt((x4-x3)*(x4-x3) + (y4-y3)*(y4-y3));
        c1 = (ad + bd + ab)/2;
        c2 = (ad + cd + ac)/2;
        c3 = (bd + cd + bc)/2;
        c4 = (ab + bc + ac)/2;
        s1 = sqrt(c1 * (c1 - ad) * (c1 - bd) * (c1 - ab));
        s2 = sqrt(c2 * (c2 - ad) * (c2 - cd) * (c2 - ac));
        s3 = sqrt(c3 * (c3 - cd) * (c3 - bd) * (c3 - bc));
        s4 = sqrt(c4 * (c4 - ab) * (c4 - bc) * (c4 - ac));
        printf("%lf\n%lf\n%lf\n%lf\n", s1, s2, s3, s4);
        if(s4 == s1 + s2 + s3){
            printf("YES\n");
        }
        else 
            printf("NO\n");
    }
    return 0;
}