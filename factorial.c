#include <stdio.h>

int facto(int n) {
    if(n==0)
    return 1;
    else
    return n*facto(n-1);
}

int main() {
    printf("Enter a number\n");
    int a;
    scanf("%d",&a);
    printf("factorial of %d is %d",a,facto(a));
    return 0;
}