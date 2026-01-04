#include <stdio.h>

void N_To_One(int n) {
    if(n>=1) {
        printf("%d ",n);
        N_To_One(n-1);
    }   
}

void One_To_N(int n) {
    if(n>=1) {
        One_To_N(n-1);
        printf("%d ",n);
    }
}

int main() {
    int a;
    printf("Enter number\n");
    scanf("%d",&a);
    printf("One to %d is\n",a);
    One_To_N(a);
    printf("\n%d to one is\n",a);
    N_To_One(a);
    return 0;
}