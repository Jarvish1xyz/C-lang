#include<stdio.h>

int main() {
    int n,t=0;
    printf("Enter n : ");
    scanf("%d", &n);
    int a[n];

    for(int i=0 ;i<n; i++) {
        printf("Enter value : ");
        scanf("%d", &a[i]);
    }
    int max1=a[1],max2=a[1];

    for(int i=0; i<n; i++) {
        if(max1<a[i]) {
            max1=a[i];
            t=i;
        }
    }
    a[t]=0;
    for(int i=0 ; i<n; i++) {
        if(max2<a[i]) {
            max2=a[i];
        }
    }

    printf("max1=%d, max2=%d", max1,max2);

    return 0;
}