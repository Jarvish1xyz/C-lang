#include<stdio.h>

int main() {////
    int n,i=1,pn=0;
    printf("Enter n : ");
    scanf("%d", &n);

    while(i<=n/2) {
        if(n%i==0) {
            pn += i;
        }
        i++;
    }

    if(pn==n) {
        printf("%d is perfect number.", n);
    }
    else {
        printf("%d is not a perfect number.", n);
    }

    

    return 0;
}