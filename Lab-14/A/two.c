#include<stdio.h>

int main() {
    int n,i,pos=0,neg=0;
    printf("Enter n : ");
    scanf("%d", &n);
    int a[n];

    for(i=0; i<n; i++) {
        printf("Enter value : ");
        scanf("%d", &a[i]);
        if(a[i]>=0) {
            pos++;
        }
        else {
            neg++;
        }
    }

    printf("positive = %d\n", pos);
    printf("negative = %d", neg);

    return 0;
}