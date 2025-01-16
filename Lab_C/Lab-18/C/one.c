#include<stdio.h>
#include"str.h"

int main() {
    char str1[100],str2[100];
    printf("Enter string 1 : ");
    gets(str1);
    printf("Enter string 2 : ");
    gets(str2);

    length(str1);
    camStr(str1,str2);
    cpyStr(str1,str2);
    catStr(str1,str2);
    
    return 0;
}