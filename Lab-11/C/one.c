#include<stdio.h>

int main() {
    int n,c,p,t=0,l,v=1,o,k;
    printf("Enter n : ");
    scanf("%d", &n);
    p=n;c=p%10;
    for(;p>0;p/=10) {
        t++;
        l=p%10;
    }
    for(;t>1;t--) {
        v*=10;
    }

    k=(((n-(l*v))/10)*10)+(c*v)+l;
    printf("%d", k);

    return 0;
}