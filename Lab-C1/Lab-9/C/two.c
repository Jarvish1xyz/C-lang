#include<stdio.h>

int main() {
    int n,binary=0,place=1,rem;
    printf("Enter n : ");
    scanf("%d", &n);
    while(n!=0) {
        rem=n%2;
        binary = binary+rem*place;
        n/=10;
        place=place*10;
    }
    printf("%d",binary);

    return 0;
}