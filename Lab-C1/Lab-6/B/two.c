#include<stdio.h>
#include<math.h>

int main() {
    int a,b,c,d,r1,r2,t1;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);
    printf("Enter c : ");
    scanf("%d", &c);

    d= pow(b,2) - (4*a*c);

    if(d==0) {
        r1 = (0-b)/2*a;
        r2 = (0-b)/2*a;
    }
    else if(d>0) {
        r1 = ((0-b) + sqrt(d))/2*a;
        r2 = ((0-b) - sqrt(d))/2*a;
    }
    else {
        r1 = (0-b)/2*a;
        r2 = (0-b)/2*a;

        t1 = (0-d);
        r1 = r1 + sqrt(t1)/2*a;
        r2 = r2 - sqrt(t1)/2*a;
    }

    printf("ans 1 = %d\n", r1);
    printf("ans 2 = %d", r2);

    return 0;


}