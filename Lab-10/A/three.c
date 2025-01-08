#include<stdio.h>

int main() {
    int n,i=1,count=0;
    printf("Enter n : ");
    scanf("%d", &n);

    while(i<=n) {
        if(n%i==0) {
            count++;
        }
        i++;
    }

    if(count>2) {
        printf("%d is not a prime.", n);
    }
    else{
        printf("%d is prime.", n);
    }

    return 0;
}