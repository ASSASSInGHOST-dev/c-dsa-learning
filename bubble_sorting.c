#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements in the array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements\n");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int temp;
    for(int pass=0;pass<n-1;pass++) {
        for(int i=0;i<n-pass-1;i++) {
            if(arr[i]>arr[i+1]) {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
    printf("The sorted array is\n");
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
    return 0;
}