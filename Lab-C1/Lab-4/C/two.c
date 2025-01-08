#include<stdio.h>

int main() {
    int days,year,week,day;
    printf("Enter days : ");
    scanf("%d", &days);

    year = days / 365;
    days = days - (year*365);
    week = days / 7;
    days = days - (week*7);
    day = days;

    printf("%d year, %d week, %d day", year,week,day);

    return 0;
}