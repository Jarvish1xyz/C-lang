#include<stdio.h>

void numToWord(int y);

int main() {
    int n;
    printf("Enter number : ");
    scanf("%d", &n);

    numToWord(n);
}

void numToWord(int y) {
    int p=0,t=0,c,l=0,x=0,b,a,s;

    while(y>0) {
        t=y%10;
        p=p*10+t;
        y/=10;
        if(t==0) {
            l++;
        }
    }
    a=p;

    while(a>0) {
        s=a%10;
        a/=10;
        if(s==0) {
            x++;
        }
    }
    b=l-x;
    
    while(p>0) {
        c=p%10;
        if(c==1) {
            printf("One ");
        }
        else if(c==2){
            printf("Two ");
        }
        else if(c==3) {
            printf("Three ");
        }
        else if(c==4) {
            printf("Four ");
        }
        else if(c==5) {
            printf("Five ");
        }
        else if(c==6) {
            printf("Six ");
        }
        else if(c==7) {
            printf("Seven ");
        }
        else if(c==8) {
            printf("Eight ");
        }
        else if(c==9) {
            printf("Nine ");
        }
        else {
            printf("Zero ");
        }
        p/=10;
    }

    if(l!=x) {
        while(b>0) {
            printf("Zero ");
            b--;
        }
    }
}