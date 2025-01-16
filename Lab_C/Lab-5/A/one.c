#include<stdio.h>

int main() {
    int feet,inch;
    printf("Enter feet : ");
    scanf("%d", &feet);

    inch = feet * 12;
    printf("%d feet = %d inches", feet,inch);

    return 0;
}