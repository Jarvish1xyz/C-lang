#include<stdio.h>

int main() {
    int n,factorial=1;
    printf("Enter n : ");
    scanf("%d", &n);

    while(n>0) {
        factorial *= n;
        n--;
    }

    printf("factorial = %d", factorial);

    return 0;
}