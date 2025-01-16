#include<stdio.h>

int main() {
    int r,c;
    printf("Enter rwo : ");
    scanf("%d", &r);
    printf("Enter col : ");
    scanf("%d", &c);
    int a[r][c];

    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            if(i>j) {
                a[i][j]=0;
            }
            else {
                scanf("%d", &a[i][j]);
            }
        }
    }

    printf("upper trienguler matrix : \n");
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}