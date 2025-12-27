#include <stdio.h>

int main() {
    int a=10;
    int *ptra=&a;
    printf("The value of a is %d\n",a);
    printf("The address of a is %p\n",&a);
    printf("The address stored in the pointer is %p\n",ptra);
    printf("Value accessed through pointer: %d\n",*ptra);
    return 0;
}