#include<stdio.h>

int main() {
    long int n,p=0;

    printf("Enter n : ");
    scanf("%d", &n);
    

    while(n!=0) {
        p=(p*10) + (n%10);
        n/=10;
    }

    printf("ans = %d", p);

    return 0;
}