#include<stdio.h>

void prime(int x, int y);

int main() {
    int a,b;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);

    prime(a,b);

    return 0;
}

void prime(int x,int y) {
    for(int i=x; i<=y; i++) {
        int p=0;
        for(int j=2; j<i; j++) {
            if(i%j==0)  p++;
        }
        if(p==0) {
            printf("%d  ", i);
        }
    }
}