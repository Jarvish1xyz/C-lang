#include<stdio.h>

int main() {
    float n=10,m,e=1,k;
    for(int i=1; i<=n; i++) {
        m=1;
        for(int j=1; j<=i; j++) {
            m*=j;
            
        }
        k=1/m;
        e+=k;
    }

    printf("%.4f", e);

    return 0;
}