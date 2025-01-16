#include<stdio.h>

int main() {
    int a;
    printf("Enter month number : ");
    scanf("%d" ,&a);

    switch (a) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31 days in month %d", a);
        break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30 days in month %d", a);
        break;
        case 2:
            printf("28 days in month %d", a);
        break;
        default :
            printf("you enter month <1 or >12 !");
        break;
    }

    return 0;
}