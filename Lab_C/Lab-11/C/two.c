#include<stdio.h>

int main() {
    int b,p,ans=0;
    printf("Enter base : ");
    scanf("%d", &b);
    printf("Enter power : ");
    scanf("%d", &p);
    int j=1;
    for(;p>1;p--) {
        j*=b;
    }

    for(;j>0;j--) {
        ans+=b;
    }

    printf("power = %d", ans);

    return 0;
}