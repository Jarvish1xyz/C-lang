#include<stdio.h>

int main() {
    int r,c,p=0,t=0;
    printf("Enter row : ");
    scanf("%d", &r);
    printf("Enter col : ");
    scanf("%d", &c);
    int a[r][c];
    
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            scanf("%d", &a[i][j]);
            if(a[i][j]==0) {
                p++;
            }
            else {
                t++;
            }
        }
    }

    if(p>t) {
        printf("matrix is sparse matrix.");
    }
    else {
        printf("matrix is not sparse matrix.");
    }

    return 0;
}