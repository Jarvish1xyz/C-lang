#include<stdio.h>

int main() {
    
    int a,b,ans;
    a=10;
    b=25;
    ans = a+b;
    printf("Sum of %d and %d = %d", a,b,ans);
    

    int a,b,ans;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);

    ans = a+b;

    printf("Sum of %d and %d = %d", a,b,ans);
    
    return 0;
}