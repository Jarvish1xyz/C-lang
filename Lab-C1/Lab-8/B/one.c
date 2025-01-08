#include<stdio.h>
#include<math.h>

int main() {
    int i=0;float sr;

    while(i<=9) {
        sr = sqrt(i);
        printf("sqrt of %d = %.4f\n", i,sr);
        i= i+1;
    }

    return 0;
}