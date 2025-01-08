#include<stdio.h>

int main() {
    int n,sum=0,ans=0;
    printf("Enter n : ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++) {
        sum=0;
        for(int j=1; j<=i; j++) {
            sum+=j;
        }
        ans+=sum;
    }

    printf("ans = %d", ans);

    return 0;
}