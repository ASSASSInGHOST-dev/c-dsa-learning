#include <stdio.h>

int sum_digits(int n) {
    if(n==0)
    return 0;
    else
    return (n%10)+sum_digits(n/10);
}

int main() {
    printf("Enter a number\n");
    int a;
    scanf("%d",&a);
    printf("Sum of digits is %d",sum_digits(a));
    return 0;
}