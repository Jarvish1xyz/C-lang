#include<stdio.h>

void swap(int *p,int *q);

int main() {
    int a,b;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);
    swap(&a,&b);
    printf("after swap : \n");
    printf("a=%d, b=%d",a,b);
}

void swap(int *p,int *q) {
    int t;
    t=*p;
    *p=*q;
    *q=t;
}