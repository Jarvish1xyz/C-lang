#include<stdio.h>

int main() {
    char p;
    printf("Enter somthing : ");
    scanf(" %c", &p);

    if(p>='A' && p<='Z') {
        printf("you enter upper case letter.");
    }
    else if(p>='a' && p<='z') {
        printf("you enter lower case letter.");
    }
    else if(p>='0' && p<='9') {
        printf("you enter digit.");
    }
    else {
        printf("you enter special character.");
    }

    return 0;
}