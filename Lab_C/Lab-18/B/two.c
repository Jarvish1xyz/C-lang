#include<stdio.h>
#include"number.h"

int main() {
    int n;
    printf("Enter n : ");
    scanf("%d", &n);

    prime(n);
    armstong(n);
    perfectNumber(n);

    return 0;
}