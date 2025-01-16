#include<stdio.h>

int main() {
    int r;
    float pi,area;

    printf("Enter radiius of circle : ");
    scanf("%d", &r);

    pi = 3.14;

    area = pi * r * r;

    printf("Area of circle with %d = %f", r,area);
}