#include <stdio.h>
int main()
{
    int a, *ptr;
    printf("Enter a variable");
    scanf("%d", &a);
    ptr = &a;
    printf("%d\n", ptr);
    printf("%d\n", *ptr);

    float b, *r;
    printf("Enter a variable\n");
    scanf("%f", &b);
    r = &b;
    printf("%d\n", r);
    printf("%f\n", *r);

    double c, *p;
    printf("Enter a variable\n");
    scanf("%f", &c);
    p = &c;
    printf("%d\n", p);
    printf("%f\n", *p);

    char h, *q;
    printf("Enter a variable\n");
    scanf(" %c", &h);
    q = &h;
    printf("%c\n", q);
    printf("%d\n", *q);

    return 0;
}
