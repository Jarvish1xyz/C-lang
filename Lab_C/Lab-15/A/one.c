#include<stdio.h>

int main() {
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    int a[n],b[n];
    printf("array 1\n");
    for(int i=0; i<n; i++) {
        printf("Enter value : ");
        scanf("%d", &a[i]);
        b[i]=a[i];
    }
    printf("array 2\n");
    for(int i=0; i<n; i++) {
        printf("%d ", b[i]);
    }

    return 0;
}