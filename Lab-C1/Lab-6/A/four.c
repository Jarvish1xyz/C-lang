#include<stdio.h>

int main() {
    int n,t;
    printf("Enter n : ");
    scanf("%d", &n);

    t = n%10;

    if(t%2==0) {
        printf("last digit of number is even.");
    }
    else {
        printf("last digit of number is odd.");
    }

    return 0;
}