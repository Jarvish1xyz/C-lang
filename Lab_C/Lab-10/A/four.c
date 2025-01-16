#include<stdio.h>

int main() {
    int n,count=0;
    printf("Enter n : ");
    scanf("%d", &n);

    while(n>0){
        count++;
        n/=10;
    }

    printf("digit of number = %d", count);

    return 0;
}