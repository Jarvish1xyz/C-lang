#include<stdio.h>

int main() {
    int n,m,d;
    printf("Enter n : ");
    scanf("%d", &n);

    m = n << 1;
    printf("%d multiply by 2 = %d\n", n,m);

    d = n >> 1;
    printf("%d divide by 2 = %d", n,d);

    return 0;
}