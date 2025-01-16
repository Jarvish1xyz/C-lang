#include<stdio.h>

int main() {
    int p=0;
    char a[100];
    printf("Enter string : ");
    gets(a);
    for(int i=0; a[i]!='\0'; i++) {
        printf("%c", a[i]);
        p++;
    }
    printf("\nlength of string = %d", p);

    return 0;
}