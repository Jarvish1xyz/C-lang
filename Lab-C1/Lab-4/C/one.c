#include<stdio.h>

int main() {
    int hh,mm,ss,sec,p,t;
    printf("Enter second : ");
    scanf("%d", &sec);

    ss = sec % 60;

    p = (sec - ss)/60;

    hh = p / 60;

    mm = p - (hh*60);

    printf("Time = %d:%d:%d", hh,mm,ss);

    return 0;
}