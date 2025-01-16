#include<stdio.h>
#include<math.h>

void prime(int n) {
    int p=0;
    for(int i=2; i<n; i++) {
        if(n%i==0) {
            p++;
        }
    }

    if(p==0) printf("prime number.\n");
    else printf("not prime number.\n");
}

void armstong(int n) {
    int a,s,m=0;
    float ans=0;
    a=n;s=n;
    while(n>0) {
        m++;
        n/=10;
    }
    while(a>0) {
        ans+=pow((a%10),m);
        a/=10;
    }
    if(ans==s) printf("armstrong number.\n");
    else printf("not armstrong number.\n");
}

void perfectNumber(int n) {
    int pn=0;
    for(int i=1; i<=n/2; i++) {
        if(n%i==0) pn+=i;
    }

    if(pn==n) printf("perfect number.");
    else printf("not a perfect number.");
}