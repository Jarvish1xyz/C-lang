#include<stdio.h>

int main() {
    int r=3,c=3,pos=0,neg=0,zero=0;
    int a[r][c];
    
    for(int i=0; i<r; i++) {
        printf("Enter value of row %d : ", i);
        for(int j=0; j<c; j++) {
            scanf("%d", &a[i][j]);
            if(a[i][j]>0) {
                pos++;
            }
            else if(a[i][j]<0) {
                neg++;
            }
            else {
                zero++;
            }
        }
    }

    printf("zero = %d, positive = %d, negative = %d", zero,pos,neg);

    return 0;
}