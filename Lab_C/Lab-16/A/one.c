#include<stdio.h>
//
int main() {
    int r,c;
    printf("Enter row : ");
    scanf("%d", &r);
    printf("Enter col : ");
    scanf("%d", &c);
    int a[r][c];

    for(int i=0; i<r; i++) {
        printf("Enter value of row %d : ", i);
        for(int j=0; j<c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("matrix : \n");
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}