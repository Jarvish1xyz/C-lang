#include<stdio.h>

int main() {
    int a,b,ans=0,p;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);

    while(b>0) {
        ans += a;
        b--;
    }

    printf("ans = %d", ans);

    return 0;
}