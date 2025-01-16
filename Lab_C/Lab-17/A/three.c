#include<stdio.h>

int main() {
    int a=3,b=2;
    int *p=&a;
    int *p1=&b;

    printf("sum = %d", *p+*p1);

    return 0;

}