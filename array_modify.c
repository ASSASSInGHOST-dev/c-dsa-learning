#include <stdio.h>

void modify(int r, int *a) {
    int *ptra=a;
    for(int i=0;i<r;i++) {
        *(ptra+i)=*(ptra+i)+10;
    }
}

int main() {
    int r;
    printf("Enter array size\n");
    scanf("%d",&r);
    int a[r];
    printf("Enter array elements\n");
    for(int i=0;i<r;i++)
    scanf("%d",&a[i]);
    modify(r,a);
    printf("Modified array:\n");
    for(int i=0;i<r;i++)
    printf("%d ",a[i]);
    return 0;
}