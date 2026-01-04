#include <stdio.h>

int main() {
    int n;;
    printf("Enter number of elements in the array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements\n");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int curr,prev;
    for(int pass=1;pass<n;pass++) {
        curr=arr[pass];
        prev=pass-1;
        while(prev>=0 && arr[prev]>curr) {
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;
    }
    printf("Sorted array is:\n");
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
    return 0;
}