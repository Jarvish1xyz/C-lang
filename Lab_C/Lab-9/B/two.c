#include<stdio.h>

int main() {
    int n,count;
    printf("Enter n = ");
    scanf("%d", &n);

    if(n>=1000) {
        count=n/1000;
        while(count>0) {
            printf("M");
            count--;
        }
    }
    n%=1000;
    if(n<1000){
        count=n/100;
        if(count<4){
            while(count>0) {
                printf("C");
                count--;
            }
        }
        else if(count==4) {
            printf("CD");
        }
        else if(count==5){
            printf("D");
        }
        else {
            count-=5;
            if(count<=3) {
                printf("D");
                while(count>0) {
                    printf("C");
                    count--;
                }
            }
            else {printf("CM");}
        }

        n%=100;
        count=n/10;
        if(count<4){
            while(count>0) {
                printf("X");
                count--;
            }
        }
        else if(count==4) {
            printf("XL");
        }
        else if(count==5){
            printf("L");
        }
        else {
            count-=5;
            if(count<=3) {
                printf("L");
                while(count>0) {
                    printf("X");
                    count--;
                }
            }
            else {printf("XC");}        
        }

        count=n%10;
        if(count<4) {
            while(count>0) {
                printf("I");
                count--;
            }
        }
        else if(count==4) {
            printf("IV");
        }
        else if(count==5) {
            printf("V");
        }
        else {
            count-=5;
            if(count<4) {
                printf("V");
                while(count>0) {
                    printf("I");
                    count--;
                }
            }
            else {printf("IX");}
        }
    }
    return 0;
}