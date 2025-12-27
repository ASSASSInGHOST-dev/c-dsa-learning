#include <stdio.h>

void increment(int r,int c,int arr[r][c]) {
    int (*ptr)[c]=arr;
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            *(*(ptr+i)+j)+=5;
        }
    }
}

int main() {
    int r,c;
    printf("Enter row size\n");
    scanf("%d",&r);
    printf("Enter column size\n");
    scanf("%d",&c);
    int a[r][c];
    printf("Enter array elements:\n");
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            scanf("%d",&a[i][j]);
        }
    }
    increment(r,c,a);
    printf("The modified array is:\n");
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}