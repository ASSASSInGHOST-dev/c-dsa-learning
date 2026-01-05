#include <stdio.h>

void second_smallest_largest(int n,int a[n]) {
    int temp;
    for(int pass=0;pass<n-1;pass++) {
        int smallindx=pass;
        for(int j=pass+1;j<n;j++) {
            if(a[smallindx]>a[j])
            smallindx=j;
        }
        temp=a[pass];
        a[pass]=a[smallindx];
        a[smallindx]=temp;
    }
}

int main() {
    int n;
    printf("Enter number of elements in the array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements\n");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    second_smallest_largest(n,arr);
    printf("Second largest element in the array is %d\n",arr[n-2]);
    printf("Second smallest element in the array is %d\n",arr[1]);
    return 0;
}