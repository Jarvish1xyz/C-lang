#include<stdio.h>

int main() {
    int n,fact=1;
    printf("Enter n : ");
    scanf("%d", &n);

    for(;n>0;n--) {
        fact*=n;
    }
    printf("fact = %d", fact);

    return 0;
}