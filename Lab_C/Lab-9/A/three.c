#include<stdio.h>
#include<math.h>

int main() {
    int b,p;
    float ans;
    printf("Enter base : ");
    scanf("%d", &b);
    printf("Enter power : ");
    scanf("%d", &p);

    ans = pow(b,p);

    printf("ans = %.2f", ans);

    return 0; 
}