#include<stdio.h>
#include<math.h>

int main() {
    int n;
    float hm,gm,s=0,m=1;
    printf("Enter n : ");
    scanf("%d", &n);
    int a[n];

    for(int i=0; i<n; i++) {
        printf("Enter value : ");
        scanf("%d", &a[i]);
        if(a[i]<=0) {
            printf("Geometric and harmonic means cannot be used directly because the data contains negative or zero values.");
            goto end;
        }
    }

    for(int i=0; i<n; i++) {
        s = s+(1.0/a[i]);
        m*=(a[i]);
    }

    hm = (n/s);
    gm = pow(m,(1.0/n));

    printf("Geometric mean = %.4f\n", gm);
    printf("harmonic mean = %.4f", hm);

    end:    

    return 0;
}