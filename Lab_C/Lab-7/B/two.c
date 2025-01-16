#include<stdio.h>

int main() {
    char a;
    printf("Enter somthing : ");
    scanf(" %c", &a);

    (a>='A' && a<='z') ? printf("an alphabet") : printf("not an alphabet.");

    return 0;
}