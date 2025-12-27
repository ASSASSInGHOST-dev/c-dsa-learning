#include <stdio.h>

void swap(int *a, int *b) {
    int temp;
    temp=*b;
    *b=*a;
    *a=temp;
}

int main() {
    int a=10;
    int b=20;
    int *a2=&a;
    int *b2=&b;
    printf("The Original value of a is %d\n",*a2);
    printf("The Original value of b is %d\n",*b2);
    swap(a2,b2);
    printf("The swapped value of a is %d\n",*a2);
    printf("The swapped value of b is %d\n",*b2);
    return 0;
}