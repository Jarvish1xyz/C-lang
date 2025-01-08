#include<stdio.h>

int main() {
    int n,t=0;
    printf("Enter n : ");
    scanf("%d", &n);
    int a[n],b[n];
    for(int i=0; i<n; i++) {
        printf("Enter value : ");
        scanf("%d", &a[i]);
    }
    int val;
    printf("Enter variable : ");
    scanf("%d", &val);

    for(int i=0,j=0; i<n,j<n-t; i++) {
        if(a[i]==val) {
            t++;
        }
        else { 
            b[j]=a[i];
            j++;
        }
    }

    for(int i=0; i<n-t; i++) {
        printf("%d ", b[i]);
    }
    printf("\nk = %d", n-t);

    return 0;
}