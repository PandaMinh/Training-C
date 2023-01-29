#include<stdio.h>

int numbers(int n);
int main(){
    int number;
    printf("Enter a positive integer");
    scanf("%d", &number);
    printf("Sum=%d", numbers(number));
    return 0;
}
int numbers(int n){
    if (n!=0)
      return n+ numbers(n-1);
    else
      return n;
}
