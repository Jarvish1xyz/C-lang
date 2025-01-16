#include<stdio.h>

int main() {
    int n,t;
    printf("Enter n : ");
    scanf("%d", &n);
    int a[n],b[n];

    printf("array a\n");
    for(int i=0; i<n; i++) {
        printf("Enter value : ");
        scanf("%d", &a[i]);
    }
    printf("array b\n");
    for(int i=0; i<n; i++) {
        printf("Enter value : ");
        scanf("%d", &b[i]);
    }
    int *p=a,*p1=b;
    for(int i=0; i<n; i++) {
        t=*(p+i);
        *(p+i)=*(p1+i);
        *(p1+i)=t;
    }

    printf("array a : ");
    for(int i=0; i<n; i++) {
        printf("%d ", a[i]);
    }
    printf("\narray b : ");
    for(int i=0; i<n; i++) {
        printf("%d ", b[i]);
    }

    return 0;
}