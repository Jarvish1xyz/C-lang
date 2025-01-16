#include<stdio.h>

int main() {
    int a,b,c,t,ans;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);
    printf("Enter c : ");
    scanf("%d", &c);

    t = (a>b) ? a : b;
    ans = c*t;

    printf("ans = %d", ans);

    return 0;
}