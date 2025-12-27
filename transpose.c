#include <stdio.h>

void transpose(int r,int c,int a[r][c]) {
    int b[c][r];
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            b[j][i]=a[i][j];
        }
    }
    printf("The transposed matrix is:\n");
    for(int i=0;i<c;i++) {
        for(int j=0;j<r;j++) {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int r,c;
    printf("\nEnter number of rows and columns\n");
    scanf("%d",&r);
    scanf("%d",&c);
    int a[r][c];
    printf("Enter array elements:\n");
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            scanf("%d",&a[i][j]);
        }
    }
    transpose(r,c,a);
    return 0;
}