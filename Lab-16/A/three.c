#include<stdio.h>

int main() {
    int r=20,c=2;
    int a[r][c];

    for(int i=0; i<r; i++) {
        printf("Enter roll no. and mark : ");
        for(int j=0; j<c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    return 0;
}