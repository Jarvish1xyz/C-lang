#include<stdio.h>

int main() {
    int n,k;
    printf("Enter n : ");
    scanf("%d", &n);
    int a[n];

    for(int i=0; i<n; i++) {
        printf("Enter value : ");
        scanf("%d", &a[i]);
    }
    for(int i=0,j=0; j<n; j++) {
        if(a[i]!=a[j]) {
            i++;
            a[i]=a[j];
            k=i+1;
        }
    }
    printf("%d", k);
    return 0;
}