#include<stdio.h>

int main() {
    int a=3,b=2,t;
    int *p=&a;
    int *p1=&b;
    t=*p;
    int *k=&t;
    a=*p1;
    b=*k;

    printf("a=%d, b=%d", a,b);

    return 0;
}