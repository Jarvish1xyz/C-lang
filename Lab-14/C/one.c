#include<stdio.h>

int main() {
    int n,p=0,t=0;
    printf("Enter n : ");
    scanf("%d", &n);
    int a[n];

    for(int i=0; i<n; i++) {
        printf("Enter value : ");
        scanf("%d", &a[i]);
    }

    for(int i=0; i<n; i++) {
        p=0;
        for(int j=0; j<n; j++) {
            if(a[i]==a[j]) {
                p++;
            }
        }
        if(p>1) {
            t++;
        }
    }
    printf("%d" , t);
    return 0;
}