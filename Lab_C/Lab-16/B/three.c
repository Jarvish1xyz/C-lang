#include<stdio.h>

int main() {
    int r,c,sum=0;
    printf("Enter row : ");
    scanf("%d", &r);
    printf("Enter col : ");
    scanf("%d", &c);
    int a[r][c];
    
    printf("matrix : \n");
    for(int i=0 ; i<r; i++) {
        for(int j=0; j<c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("diagonal element : \n");
    for(int i=0; i<r; i++) {
        for(int j=0 ;j<c; j++) {
            if(i==j) {
                printf("%d ", a[i][j]);
                sum+=a[i][j];
            }
        }
    }
    printf("\ntrac = %d", sum);

    return 0;
}