#include<stdio.h>

int main() {
    int r,g,b;
    float r1,g1,b1,w,c,m,y,k,max;

    printf("Enter red : ");
    scanf("%d", &r);
    printf("Enter green : ");
    scanf("%d", &g);
    printf("Enter blue : ");
    scanf("%d", &b);

    r1 = r/255.0;
    g1 = g/255.0;
    b1 = b/255.0;

    if(r1>g1) {
        if(r1>b1) {
            max=r1;
        }
        else {
            max=b1;
        }
    }
    else {
        if(g1>b1) {
            max=g1;
        }
        else {
            max=b1;
        }
    }

    if(r==0 && g==0 && b==0) {
        c=0;
        m=0;
        y=0;
        k=1;
    }
    else {
        w=max;
        c=(w-r1)/w;
        m=(w-g1)/w;
        y=(w-b1)/w;
        k=1-w;
    }

    printf("c=%f\n", c);
    printf("m=%f\n", m);
    printf("y=%f\n", y);
    printf("k=%f\n", k);

    return 0;

   
}