#include<stdio.h>

int si(int, int, int);

int main() {
    int tp=1,ri,pa;
    printf("Enter principle amount : ");
    scanf("%d", &pa);
    printf("Enter rate of intrest : ");
    scanf("%d", &ri);
    printf("Enter time period : ");
    scanf("%d", &tp);

    int ans=si(pa,ri,tp);

    printf("simple intrest = %d", ans);

    return 0;
}

int si(int p,int r,int t){
    int ans = (p*r*t)/100;

    return ans;
}