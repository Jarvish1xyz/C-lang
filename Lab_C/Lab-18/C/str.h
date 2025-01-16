#include<stdio.h>

void length(char *x) {
    int l=0;
    for(int i=0; *(x+i)!='\0'; i++) {
        l++;
    }

    printf("length = %d", l);
}

void camStr(char *p,char *q) {
    int l=0,k=0,i=0,j=0;
    char a[100],b[100];
    
    for(i,j; *(p+i)!='\0' && *(q+j)!='\0'; i++,j++ ) {
        a[i]=*(p+i);b[j]=*(q+j);
        if(a[i]==b[j]) {
            l=1;
        }
        else {
            printf("not same string.");
            break;
        }
    }
}

void cpyStr(char *r,char *s) {
    char a[100],b[100];
    for(int i=0; *(r+i)!='\0'; i++) {
        b[i]=*(r+i);
    }

    for(int i=0; b[i]!='\0'; i++) {
        printf("%s", b[i]);
    }
}

void catStr(char *g,char *h) {
    char a[100],i=0;
    for(i=0; *(g+i)!='\0'; i++) {
        a[i]=*(g+i);
    }i++;
    a[i]=' ';
    for(int j=0; *(h+j)!='\0'; j++) {
        i++;
        a[i]=*(h+j);
    }

    for(int k=0; a[k]!='\0'; k++) {
        printf("%s", a[k]);
    }
}