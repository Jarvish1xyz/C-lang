#include<stdio.h>

void fibbo(int x[],int t);

int main() {
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    int b[n];
    fibbo(b,n);

    for(int i=0; i<n; i++) {
        printf("%d  ", b[i]);
    }

    return 0;
}

void fibbo(int x[],int t) {
    x[0]=0;x[1]=1;
    for(int i=2; i<t; i++) {
        x[i]=x[i-1]+x[i-2];
    }
}