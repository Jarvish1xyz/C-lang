#include<stdio.h>

int main() {
    int a,b,c,max;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);
    printf("Enter c : ");
    scanf("%d", &c);

    max = (a>b) ? ((a>c) ? a : c) : ((b>c) ? b : c);

    printf("%d is largest.", max);

    return 0;
}