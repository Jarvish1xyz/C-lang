#include<stdio.h>

int main() {
    int n,g,h,d;
    printf("Enter basic salary : ");
    scanf("%d", &n);

    if(n>=10000 && n<20000) {
        h = n*0.2;
        d = n*0.8;
    }
    else if(n>=20000 && n<30000) {
        h = n*0.25;
        d = n*0.9;
    }
    else if(n>=30000) {
        h = n*0.3;
        d = n*0.95;
    }

    g = n + h + d;
    printf("gross salary = %d", g);

    return 0;
}