#include<stdio.h>

int main() {
    int n,p=1,t;
    printf("Enter n : ");
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++) {
        printf("Enter value : ");
        scanf("%d", &a[i]);
        t=a[i];
    }
    int b[t];
    for(int i=0; i<t; i++) {
        b[i]=p;
        p++;
    }
    for(int i=0,j=0; i<n,j<t; i++) {
        ram:
        if(a[i]==b[j]) {
            j++;
        }
        else {
            printf("%d ", b[j]);
            j++;
            goto ram;
        }
    }
    return 0;
}