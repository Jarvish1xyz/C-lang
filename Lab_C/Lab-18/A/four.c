#include<stdio.h>

float max(float x, float y);

int main() {
    float a,b;
    printf("Enter a : ");
    scanf("%f", &a);
    printf("Enter b : ");
    scanf("%f", &b);
    
    float mx=max(a,b);
    float mn=a+b-mx;

    printf("max = %f, min = %f", mx,mn);

    return 0;
}

float max(float x,float y) {
    if(x>y) {
        return x;
    }
    else {
        return y;
    }
}