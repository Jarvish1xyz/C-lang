#include<stdio.h>
#include<math.h>

int main() {
    int n,a,s,m=0;
    float ans=0;
    printf("Enter n : ");
    scanf("%d", &n);
    a=n;
    s=n;
    while(n>0) {
        m++;
        n/=10;
    }
    while(a>0) {
        ans+=pow((a%10),m);
        a/=10;
    }

    if(ans==s) {
        printf("armstrong number.");
    }
    else{
        printf("not armstrong number.");
    }

    return 0;
}