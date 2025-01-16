#include<stdio.h>

int main() {
    int hight,base,area;
    printf("Enter hight of triangle : ");
    scanf("%d", &hight);
    printf("Enter base of triangle : ");
    scanf("%d", &base);

    area = (hight * base)/2;

    printf("Area of triangle = %d", area);

    return 0;

}