#include<stdio.h>

int main() {
    int n,i;
    printf("Enter n : ");
    scanf("%d", &n);
    int a[n];

    for(i=0; i<n; i++) {
        printf("Enter value : ");
        scanf("%d", &a[i]);
    }

    printf("normal : ");
    for(i=0; i<n; i++) {
        printf("%d ", a[i]);
    }

    printf("\nrevers : ");
    for(i=n-1; i>=0; i--) {
        printf("%d ", a[i]);
    }

    return 0;
}