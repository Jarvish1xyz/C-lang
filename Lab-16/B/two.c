#include<stdio.h>

int main() {
    int r,c;
    printf("Enter row : ");
    scanf("%d", &r);
    printf("Enter col : ");
    scanf("%d", &c);
    int a[r][c], b[r][c], ans[r][c];
    
    printf("matrix-1 : \n");
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("matrix-2 : \n");
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            ans[i][j]=0;
            for(int k=0; k<r; k++) {
                ans[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("ans matrix : \n");
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }

    return 0;
}
