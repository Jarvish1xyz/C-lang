#include<stdio.h>

int main() {
    int r,c;
    printf("Enter row : ");
    scanf("%d", &r);
    printf("Enter col : ");
    scanf("%d", &c);
    int a[r][c],b[r][c];

    printf("matrix a\n");
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("matrix b\n");
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    int *p=a, *l=b;

    printf("ans \n");
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            printf("%d ", *((p+j)+i)+*((l+j)+i));
        }
        *p=*((p)+1);
        *l=*((l)+1);
        printf("\n");
    }

    return 0;
}