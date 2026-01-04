#include <stdio.h>

int main() {
    int n,temp=0;
    printf("Enter number of elements in the array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements\n");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(int pass=0;pass<n-1;pass++) {
        int smallindx=pass;
        for(int j=pass+1;j<n;j++) {
            if(arr[smallindx]>arr[j])
            smallindx=j;
        }
        temp=arr[pass];
        arr[pass]=arr[smallindx];
        arr[smallindx]=temp;
    }
    printf("Sorted array is:\n");
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
    return 0;
}
