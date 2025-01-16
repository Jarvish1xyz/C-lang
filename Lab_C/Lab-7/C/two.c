#include<stdio.h>

int main() {
    int year, month,t=0;
    printf("Enter year : ");
    scanf("%d", &year);

    if(year%400==0) {
        t++; 
    }
    else if(year%100==0) {
        t=0;
    }
    else if(year%4==0){
            t++;
    }
    printf("Enter month : ");
    scanf("%d", &month);

    switch(month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31 days in month %d.", month);
        break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30 days in month %d.", month);
        break;
        case 2:
            if(t>0) {
                printf("29 days in month %d.", month);
            }
            else {
                printf("28 days in month %d.", month);
            }
        break;
        default:
            printf("invalid input!");
        break;
    }
}