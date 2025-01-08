#include<stdio.h>

int main() {
    char a='A',b='a';

    while(a<='Z') {
        printf("%c ", a);
        a++;
    }
    printf("\n");
    while(b<='z') {
        printf("%c ", b);
        b++;
    }

    return 0;
}