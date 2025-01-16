#include<stdio.h>

int main() {
    // int i=1;
    // while(i<=10) {
    //     printf("%d ", i);
    //     i++;
    // }

    // int n,i=1;
    // printf("Enter n : ");
    // scanf("%d", &n);
    // while(i<=n) {
    //     printf("%d ", i);
    //     i++;
    // }

    int n,i=1;
    printf("Enter n : ");
    scanf("%d", &n);
    do{
        printf("%d ", i);
        i++;
    }while(i<=n);

    return 0;
}