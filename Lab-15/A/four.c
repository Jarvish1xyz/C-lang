#include<stdio.h>

int main() {
    int n,p,t=0;
    printf("Enter n : ");
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++) {
        printf("Enter value : ");
        scanf("%d", &a[i]);
    }
    printf("Enter element : ");
    scanf("%d", &p);
    printf("Index ");
    for(int i=0; i<n; i++) {
        if(a[i]==p) {
            t++;
            printf("%d ", i);
        }
    }
    if(t==0) {
        printf("not found.");
    }
    return 0;
}