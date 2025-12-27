#include <stdio.h>

void max(int r, int *a, int *max) {
    int *ptr=a;
    *max=*ptr;
    for(int i=0;i<r;i++) {
        if(*(ptr+i)>*max)
        *max=*(ptr+i);
    }
}

int main() {
    int size;
    printf("Enter size of array\n");
    scanf("%d",&size);
    int maximum,arr[size];
    printf("Enter array elements\n");
    for(int i=0;i<size;i++)
    scanf("%d",&arr[i]);
    max(size,arr,&maximum);
    printf("The maximum number in the array is: %d",maximum);
    return 0;
}