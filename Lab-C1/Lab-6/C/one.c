#include<stdio.h>

int main() {
    int a,b,c;

    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);
    printf("Enter c : ");
    scanf("%d", &c);

    if(a>b) {
        if(a>c){
            if(b>c){
                printf("b=%d is second largest.", b);
            }
            else {
                printf("c=%d is second largest.", c);
            }
        }
        else {
            printf("a=%d is second largest.", a);
        }
    }
    else {
        if(b>c) {
            if(a>c) {
                printf("a=%d is second largest.", a);
            }
            else {
                printf("c=%d is second largest.", c);
            }
        }
        else {
            printf("b=%d is second largest.", b);
        }
    }

    return 0;
}