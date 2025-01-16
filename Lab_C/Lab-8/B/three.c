#include<stdio.h>

int main() {
    int i=1,n=1;

    while(n<=50) {
        printf("%d, ", i);
        i += 3;
        n++;
    }

    return 0;
}