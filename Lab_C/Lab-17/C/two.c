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
    int *p1=a;
    int *p2=b;
    min=a[0];max=a[0];
    for(int i=0; i<n; i++) {
        if(max<*(p1+i)) {
            max=*(p1+i);
        }
    }
    for(int i=0; i<n; i++) {
        int x=0;
        min=a[0];
        for(int j=0; j<n; j++) {
            if(min>*(p1+j)) {
                min=*(p1+j);
                x=j;
            }
        }
        *(p2+i)=min;
        a[x]+=max+5;
    }

    for(int i=0; i<n; i++) {
        printf("%d ", b[i]);
    }
    return 0;
}