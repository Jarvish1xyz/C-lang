#include<stdio.h>

int main() {
    float fahr,cels;
    printf("Enter temp in fahrenheit : ");
    scanf("%d", &fahr);

    cels = ((fahr-32)*5)/9;

    printf("%d fahernheit = %d celsius", fahr,cels);

    return 0;
    
}