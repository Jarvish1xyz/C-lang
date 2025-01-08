#include<stdio.h>

int main() {
    int a;

    printf("Enter a : ");
    scanf("%d", &a);

    if(a/2 == (a-1)/2) {
        printf("a is odd.");
    }
    else {
        printf("a is even.");
    }
}