#include<stdio.h>

int max(int,int);

int main() {
    int a,b;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);

    int mx=max(a,b);
    int mn=a+b-mx;

    printf("max = %d, min = %d", mx,mn);

    return 0;
}

int max(int x,int y) {
    if(x>y) {
        return x;
    }
    else {
        return y;
    }
}