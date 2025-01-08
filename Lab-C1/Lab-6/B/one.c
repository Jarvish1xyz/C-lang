#include<stdio.h>

int main() {
    int u,bill;
    printf("Enter electricity unit : ");
    scanf("%d", &u);

    if(u<=50) {
        bill = u*0.5;
    }
    else {
        u = u-50;
        bill = 25;
        if(u<=100) {
            bill = bill+(u*0.75);
        }
        else{
            u = u-100;
            bill = bill+75;
            if(u<=100) {
                bill = bill+(u*1.20);
            }
            else {
                u = u-100;
                bill = bill+120+(u*1.50);
            }
        }
    }

    bill = bill+(bill*0.20);
    printf("your total electricity bill = %d", bill);

    return 0;
}