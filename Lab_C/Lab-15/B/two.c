#include<stdio.h>

int main() {
    int n,temp;
    printf("Enter n : ");
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++) {
        printf("Enter value : ");
        scanf("%d", &a[i]);
    }

    for(int i=0; i<n/2; i++) {
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }

    for(int i=0; i<n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}