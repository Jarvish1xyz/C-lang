#include<stdio.h>

int main() {
    int a=5;
    printf("%d", &a);
    int *p=&a;
    printf("%d %d", *p, p);

    return 0;
}