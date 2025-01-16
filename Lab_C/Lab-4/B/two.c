#include<stdio.h>

 int main() {
    int p,roi,tp,si;
    printf("Enter principal : ");
    scanf("%d", &p);
    printf("Enter rate of interest : ");
    scanf("%d", &roi);
    printf("Enter time petiod : ");
    scanf("%d", &tp);

    si = (p*roi*tp)/100;

    printf("Simpal interest = %d", si);
 }