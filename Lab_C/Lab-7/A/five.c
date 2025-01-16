#include<stdio.h>

int main() {
    int n;
    printf("Enter n : ");
    scanf("%d", &n);

    (n%2==0) ? printf("n = %d is even.", n) : printf("n = %d is odd.", n);

    return 0;
}