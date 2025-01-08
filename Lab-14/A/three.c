#include<stdio.h>

int main() {
    int n,odd=0,even=0;
    printf("Enter n : ");
    scanf("%d", &n);
    int a[n];

    for(int i=0; i<n; i++) {
        printf("Enter value : ");
        scanf("%d", &a[i]);
        if(a[i]%2==0) {
            even++;
        }
        else {
            odd++;
        }
    }

    printf("even = %d\n", even);
    printf("odd = %d", odd);

    return 0;
}