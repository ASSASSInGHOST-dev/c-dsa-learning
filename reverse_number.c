#include <stdio.h>

static int rev=0;

int reverse(int n) {
    if(n==0)
    return rev;
    else {
        rev=rev*10+(n%10);
        return reverse(n/10);
    }
}

int main() {
    printf("Enter a number\n");
    int a;
    scanf("%d",&a);
    printf("Reversed number is %d",reverse(a));
    return 0;
}