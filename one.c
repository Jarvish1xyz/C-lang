#include<stdio.h>

void count(char *st,int *cl, int *sl, int *num);

int main() {
    char a[100];
    printf("Enter string : ");
    gets(a);
    int c,s,n;
    count(a,&c,&s,&n);
    printf("capital latter = %d\n", c);
    printf("small latter = %d\n", s);
    printf("numbers = %d", n);

    return 0;
}

void count(char *st,int *cl, int *sl, int *num) {
    int c=0,s=0,n=0;
    for(int i=0; *(st+i)!='\0'; i++) {
        if(*(st+i)>='A' && *(st+i)<='Z') {
            c++;
        }
        else if(*(st+i)>='a' && *(st+i)<='z') {
            s++;
        }
        else if(*(st+i)>='0' && *(st+i)<='9') {
            n++;
        }
    }
    *cl=c;
    *sl=s;
    *num=n;
}