#include<stdio.h>

int main() {
    int a,b,ans,p=0;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);

    while(a>=b) {
        a = a-b;
        p++;
    }

    printf("ans = %d\n", p);
    printf("reminder = %d", a);

    return 0;
}