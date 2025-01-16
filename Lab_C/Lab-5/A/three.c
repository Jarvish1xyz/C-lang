#include<stdio.h>

int main() {
    int n;
    printf("Enter n : ");
    scanf("%d", &n);

    if(n>=0) {
        printf("n is positive.");
    }
    else {
        printf("n is negative.");
    }

    return 0;
}