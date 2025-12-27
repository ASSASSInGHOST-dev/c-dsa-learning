#include <stdio.h>

int repeat(int n) {
    if(n==1)
    return 1;
    else
    return n*repeat(n-1);
}

int main() {
    int a, r;
    printf("Enter a number\n");
    scanf("%d", &a);
    r=repeat(a);
    printf("Factorial of %d is %d", a, r);
    return 0;
}