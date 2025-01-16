#include<stdio.h>

int main() {
    int b,p,ans=1;
    printf("Enter base : ");
    scanf("%d", &b);
    printf("Enter power : ");
    scanf("%d", &p);

    for(;p>0;p--) {
        ans*=b;
    }

    printf("ans = %d", ans);

    return 0;
}