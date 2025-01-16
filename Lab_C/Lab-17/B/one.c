#include<stdio.h>

int main() {
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    int a[n],b[n];
    for(int i=0; i<n; i++) {
        printf("Enter value : ");
        scanf("%d", &a[i]);
    }

    int *p=a,*p1=b;
    for(int i=0; i<n; i++) {
        *(p1+i)=*(p+i);
    }

    for(int i=0; i<n; i++) {
        printf("%d ", b[i]);
    }

    return 0;
}