#include<stdio.h>

int sum(int,int);

int main() {
    int a,b;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Entet b : ");
    scanf("%d", &b);

    int ans=sum(a,b);

    printf("ans = %d", ans);

    return 0;
}

int sum(int x, int y) {
    int s=x+y;
    return s;
}