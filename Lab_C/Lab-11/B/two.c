#include<stdio.h>

int main() {
    int n,p,m=0,l,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0;
    printf("Enter n : ");
    scanf("%d", &n);

    p=n;
    for(;p>0;p/=10) {
        m++;
    }

    for(;n>0;n/=10) {
        l=n%10;
        switch(l) {
            case 0: a++;
            break;
            case 1: b++;
            break;
            case 2: c++;
            break;
            case 3: d++;
            break;
            case 4: e++;
            break;
            case 5: f++;
            break;
            case 6: g++;
            break;
            case 7: h++;
            break;
            case 8: i++;
            break;
            case 9: j++;
            break;
        }
    }

    printf("digit of number = %d\n",m);
    char x='a';
    for(int o=0; o<10; o++) {
        switch(o) {
            case 0: printf("frequency of %d = %d\n", o,a);
            break;
            case 1: printf("frequency of %d = %d\n", o,b);
            break;
            case 2: printf("frequency of %d = %d\n", o,c);
            break;
            case 3: printf("frequency of %d = %d\n", o,d);
            break;
            case 4: printf("frequency of %d = %d\n", o,e);
            break;
            case 5: printf("frequency of %d = %d\n", o,f);
            break;
            case 6: printf("frequency of %d = %d\n", o,g);
            break;
            case 7: printf("frequency of %d = %d\n", o,h);
            break;
            case 8: printf("frequency of %d = %d\n", o,i);
            break;
            case 9: printf("frequency of %d = %d\n", o,j);
            break;
        }
    }

    return 0;
}