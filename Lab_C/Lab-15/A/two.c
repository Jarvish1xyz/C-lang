#include<stdio.h>

int main() {
    int n,neg=0;
    printf("Enter n : ");
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++) {
        printf("Enter value : ");
        scanf("%d", &a[i]);
        if(a[i]<0) {
            neg++;
        }
    }
    printf("total number of negative = %d", neg);

    return 0;
}