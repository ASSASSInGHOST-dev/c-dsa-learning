#include <stdio.h>

void sort(int n,int a[n]) {
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
    sort(n,arr);
    printf("After removing duplicates:\n");
    for(int i=1;i<n;i++) {
        if(arr[i-1]!=arr[i])
        printf("%d ",arr[i-1]);
    }
    printf("%d",arr[n-1]);
    return 0;
}