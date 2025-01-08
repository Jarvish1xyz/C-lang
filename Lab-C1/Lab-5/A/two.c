#include<stdio.h>

/*
int main() {
    int a,b,t;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);

    printf("you enter a=%d and b=%d\n", a,b);
    t=b;
    b=a;
    a=t;

    printf("now, a=%d and b=%d", a,b);

    return 0;    
}
*/

int main() {
    int a,b;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);

    printf("you enter a=%d and b=%d\n", a,b);
    b=a+b;
    a=b-a;
    b=b-a;

    printf("now a=%d and b=%d", a,b);

    return 0;

}