#include<stdio.h>

int main() {
    int n,tmp=0,p,temp;
    printf("Enter n : ");
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++) {
        printf("Enter vlaue : ");
        scanf("%d", &a[i]);
    }
    printf("Enter p : ");
    scanf("%d", &p);
    temp=n+1;
    int b[temp];
    for(int i=0,j=0; i<n,j<temp; j++) {
        if(p<a[i]) {
            tmp++;
            if(tmp>1){
                goto ram;
            }
            b[j]=p;
        }
        
        else {
            ram:
            b[j]=a[i];
            i++;
        }
    }

    for(int i=0; i<temp; i++) {
        printf("%d ", b[i]);
    }

    return 0;
}