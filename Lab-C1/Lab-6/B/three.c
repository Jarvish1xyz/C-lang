#include<stdio.h>

int main() {
    int a,b,c;
    printf("Enter side-1 : ");
    scanf("%d", &a);
    printf("Enter side-2 : ");
    scanf("%d", &b);
    printf("Enter side-3 : ");
    scanf("%d", &c);

    if(a==b && b==c && c==a) {
        printf("triangle is equilateral triangle.");
    }
    else if(a==b || b==c || a==c) {
        printf("triangle is isosceles triangle.");
    }
    else if((a*a)==(b*b)+(c*c) || (b*b)==(a*a)+(c*c) || (c*c)==(a*a)+(b*b)) {
        printf("triangle is right angle triangle.");
    }
    else if(a!=b && b!=c && a!=c) {
        printf("triangle is scalene triangle.");
    }
    else {
        printf("triangle with %d %d %d", a,b,c);
    }

    return 0;
     
}