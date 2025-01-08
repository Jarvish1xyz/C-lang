#include<stdio.h>

int main() {
    int n,p=0;
    printf("Enter n : ");
    scanf("%d", &n);
    int a[n],b[n];

    for(int i=0; i<n; i++) {
        printf("Enter hight : ");
        scanf("%d", &a[i]);
        printf("Enter weight : ");
        scanf("%d", &b[i]);
        if(a[i]>170 && b[i]<50) {
            p++;
        }
    }

    printf("%d", p);

    return 0;
}