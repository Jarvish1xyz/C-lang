#include<stdio.h>

int main() {
    int i=0,n,sum=0;
    printf("Enter n : ");
    scanf("%d", &n);

    while(i<=n) {
        sum += i;
        i++;
    }

    printf("sum = %d", sum);

    return 0;
}