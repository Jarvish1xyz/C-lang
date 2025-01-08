#include<stdio.h>

int main() {
    int n,p=0;
    printf("Enter n : ");
    scanf("%d", &n);
    int a[n];
    for(int i=0 ; i<n; i++) {
        printf("Enter value : ");
        scanf("%d", &a[i]);
        if(a[i]%3==0) {
            p++;
        }
    }
    printf("number of element divisibel by 3 = %d", p);

    return 0;
}