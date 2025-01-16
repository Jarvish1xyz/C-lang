#include<stdio.h>

int main() {
    int a,b,i=1,max,min,lcm=1,hcf;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);

    if(a>b) {
        max=a;
        min=b;
    }
    else {
        max=b;
        min=a;
    }

    while(i<=min) {
        if(a%i==0 && b%i==0) {
            hcf=i;    
        }
        i++;
    }

    i=2;
    while(i<=max) {
        while(a%i==0 && b%i==0) {
            a/=i;
            b/=i;
            lcm*=i;
        }
        while(a%i==0) {
            a/=i;
            lcm*=i;
        }
        while(b%i==0) {
            b/=i;
            lcm*=i;
        }
        i++;
    }

    printf("HCF = %d\n", hcf);
    printf("LCM = %d", lcm);
    return 0;
}