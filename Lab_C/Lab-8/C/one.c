#include<stdio.h>
#include<math.h>

int main() {
    int i=1,sum=0,avg,n=1,t;

    while(n<=10) {
        t=i*i;
        if(t%10==9) {
            printf("%d, ", t);
            sum += t;
            n++;
        }
        i++;
    }

    avg = sum/10;

    printf("sum = %d, avg = %d", sum,avg);

    return 0;
}