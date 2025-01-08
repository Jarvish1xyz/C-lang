#include<stdio.h>

int main() {
    int n,sum=0,avg,i=1,p;
    printf("How many number's sum and avg you want : ");
    scanf("%d", &n);

    while(i<=n) {
        printf("Enter number : ");
        scanf("%d", &p);
        sum+=p;
        i++;
    }
    avg=sum/n;

    printf("sum of %d numbre's = %d, ", n,sum);
    printf("avg of %d numbre's = %d", n,avg);
    return 0;
}