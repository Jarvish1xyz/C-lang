#include<stdio.h>

int main() {
    char s[100];
    printf("Enter string : ");
    gets(s);
    int *p=s;
    int k=0;


    for(int i=0; *(p+i)!='\0'; i++) {
        k++;
    }

    printf("length of string = %d", k);

    return 0;
    
}