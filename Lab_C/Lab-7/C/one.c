#include<stdio.h>

int main() {
    int a,b;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);

    if(a & b){
        printf("a and b are same.");
    }
    else {
        printf("a and b are not same.");
    }

    return 0;
}