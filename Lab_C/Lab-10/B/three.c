#include<stdio.h>
int main() {
    int n,p,t=0;
    printf("Enter n : ");
    scanf("%d", &n);

    p=n;
    while(n>0) {
        t=(t*10) + n%10;
        n/=10;
    }

    if(p==t) {
        printf("paindrom number.");
    }
    else {
        printf("not palindrom number.");
    }

    return 0;
}