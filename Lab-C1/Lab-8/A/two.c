#include<stdio.h>

int main() {
    {
    int i=1;
    while(i<=10) {
        if(i%2!=0) {
            printf("%d ", i);
        }
        i++;
    }
    }
    printf("\n");
    {
    int n,i=1;
    printf("Enter n : ");
    scanf("%d", &n);
    while(i<=n) {
        if(i%2!=0) {
            printf("%d ", i);
        }
        i++;
    }
    }
    printf("\n");
    {
    int n,i=1;
    printf("Enter n : ");
    scanf("%d", &n);
    do{
        if(i%2!=0) {
            printf("%d ", i);
        }
        i++;
    }while(i<=n);
    }

    return 0;
}