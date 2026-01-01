#include <stdio.h>

int largest(int a[],int size) {
    int max=a[0];
    for(int i=0;i<size;i++) {
        if(max<a[i])
        max=a[i];
    }
    return max;
}

int smallest(int a[],int size) {
    int min=a[0];
    for(int i=0;i<size;i++) {
        if(min>a[i])
        min=a[i];
    }
    return min;
}

int main() {
    int n;
    printf("\nEnter number of elements in the array\n");
    scanf("%d",&n);
    int a[n];
    int even=0,odd=0;
    printf("Enter array elements\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int l=largest(a,n);
    int min=smallest(a,n);
    printf("The largest element of the array is %d\n",l);
    printf("The smallest element of the array is %d\n",min);
    for(int i=0;i<n;i++) {
        if(a[i]!=0) {
            if(a[i]%2==0)
            even+=1;
            else
            odd+=1;
        }
    }
    printf("The number of even numbers in the array is %d\n",even);
    printf("The number of odd numbers in the array is %d\n",odd);
    return 0;
}