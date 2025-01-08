#include<stdio.h>

int main() {
    int n,odd=0,even=0,i=1;

    while (i<=10) {
        printf("Enter n : ");
        scanf("%d", &n);

        if(n%2==0) {
            even++;
        }
        else {
            odd++;
        }

        i++;
    }

    printf("odd = %d, even = %d", odd,even);

    return 0;
}