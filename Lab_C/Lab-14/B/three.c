#include<stdio.h>

int main() {
    int n,min,max,p=0;
    printf("Enter n : ");
    scanf("%d", &n);
    int a[n],b[n];

    for(int i=0; i<n; i++) {
        printf("Enter value : ");
        scanf("%d", &a[i]);
    }
    min=a[0];max=a[0];
    for(int i=0; i<n; i++) {
        if(max<a[i]) {
            max=a[i];
        }
    }
    for(int i=0; i<n; i++) {
        int x=0;
        min=a[0];
        for(int j=0; j<n; j++) {
            if(min>a[j]) {
                min=a[j];
                x=j;
            }
        }
        printf("%d\n", min);
        b[i]=min;
        a[x]+=max+1;
    }

    for(int i=0; i<n; i++) {
        printf("%d ", b[i]);
    }
    return 0;
}