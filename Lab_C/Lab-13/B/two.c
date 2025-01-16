#include<stdio.h>

int main() {
    int n=5,p=0;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            if(p==0) {
                p=1;
            }
            else if(p==1) {
                p=0;
            }
            printf("%d", p);
        }
        printf("\n");
    }

    return 0;
}