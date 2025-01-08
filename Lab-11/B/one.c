#include<stdio.h>

int main() {
    int n,p=0,t=1,m=0,l;
    printf("Enter n : ");
    scanf("%d", &n);

    for(int i=0; p<=n;) {
        l=p;
        printf("%d ", p);
        p=t+i;
        t=l;
        m++;
        i=p;
    }
    return 0;
}