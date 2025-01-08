#include<stdio.h>

void main() {
    char abc;
    printf("Enter char a : ");
    scanf("%c", &abc);

    if(abc == ('a' || 'e' || 'i' || 'o' || 'u')) {
        printf("char is vowel.");
    }
    else {
        printf("char is consonant.");
    }

}