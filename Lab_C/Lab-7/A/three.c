#include<stdio.h>

int main() {
    int a;float b;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%f", &b);

    char o;
    printf("Enter arithmatic operator : ");
    scanf(" %c", &o);

    switch (o) {
        case '+' :
            printf("addition of %d and %.0f = %.2f", a,b,a+b);
        break;
        case '-' :
            printf("subtraction of %d and %.0f = %.2f", a,b,a-b);
        break;
        case '*' :
            printf("multiplicatio of %d and %.0f = %.2f", a,b,a*b);
        break;
        case '/' :
            printf("divition of %d and %.0f = %.2f", a,b,a/b);
        break;
        default :
            printf("you dont enter correct arithmatic operatoe");
        break;
    }

    return 0;
}