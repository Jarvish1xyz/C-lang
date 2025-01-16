#include<stdio.h>

int main() {
    int n,c,j,sum;
    printf("Enter n : ");
    scanf("%d", &n);
    c=n%10;
    while(n>0) {
        j=n%10;
        n/=10;
    }
    
    sum=c+j;
    printf("ans = %d", sum);
    return 0;
}