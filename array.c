#include <stdio.h>

int largest(int a[],int size) {
    int max=a[0];
    for(int i=0;i<=size;i++) {
        if(max<a[i])
        max=a[i];
    }
    return max;
}

int sum(int a[],int size) {
    int s=0;
    for(int i=0;i<=size-1;i++)
    s=s+a[i];
    return s;
}

void reverse(int a[],int size) {
    int b[size],s=0;
    for(int i=size-1;i>=0;i--){
        b[s]=a[i];
        s++;
    }
    printf("The reversed array is:");
    for(int j=0;j<=size-1;j++)
    printf("%d",b[j]);
}

int main() {
    int n;
    printf("\nEnter number of elements in the array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int l=largest(a,n);
    int s=sum(a,n);
    printf("The largest element of the array is %d\n",l);
    printf("The sum of the elements of the array is %d\n",s);
    reverse(a,n);
    return 0;
}