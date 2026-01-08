#include <stdio.h>

void rotate(int n,int a[n],int k) {
    int temp,j=0;
    int arr1[k],arr2[n-k];
    for(int i=0;i<k;i++)
    arr1[i]=a[i];
    for(int i=k;i<n;i++) {
        arr2[j]=a[i];
        j++;
    }
    for(int i=0;i<n-k;i++) {
        a[i]=arr2[i];
    }
    for(int i=0;i<k;i++)
    a[n-k+i]=arr1[i];    
}

int main() {
    int n,k;
    printf("Enter number of elements in the array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter index to be rotated by:\n");
    scanf("%d",&k);
    k=k%n;
    rotate(n,a,k);
    printf("Rotated array:\n");
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0;
}