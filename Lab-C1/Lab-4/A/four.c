#include<stdio.h>

int main() {

    int a,b,c,avg;
    a=10;
    b=20;
    c=30;
    avg = (a+b+c)/3;

    printf("Average of three number = %d", avg);


    int a,b,c,avg;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);
    printf("Enter c : ");
    scanf("%d", &c);

    avg = (a+b+c)/3;

    printf("Average of three number = %d", &avg);

}