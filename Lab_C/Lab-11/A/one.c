#include<stdio.h>
 
int main() {
    int n;
    for(int i=1; i<=10; i++) {
        printf("%d ", i);
    }

    printf("\nEnter n : ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        printf("%d ", i);
    }

    return 0;
}