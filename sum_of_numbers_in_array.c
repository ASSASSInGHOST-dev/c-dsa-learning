#include <stdio.h>

int sum(int n,int a[n]) {
    if(n>=0) {
       return a[n] + sum(n-1,a); 
    }
    else
    return 0;
}

int main() {
    int n;
    printf("Enter number of elements in the array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Sum of the numbers in the array is:%d",sum(n-1,a));
    return 0;
}