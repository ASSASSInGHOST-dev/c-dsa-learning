#include <stdio.h>

int main() {
    int n,key;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements\n");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int low=0,high=n-1,flag=0;
    int mid;
    printf("Enter the number to be searched\n");
    scanf("%d",&key);
    while(low<=high) {
        mid=(high+low)/2;
        if(key==arr[mid]) {
            printf("%d found! It is the %dth element\n",key,mid+1);
            flag=1;
            break;
        }
        else if(arr[mid]>key)
        high=mid-1;
        else
        low=mid+1;
    }
    if(flag==0)
    printf("%d not found!\n",key);
    return 0;
}