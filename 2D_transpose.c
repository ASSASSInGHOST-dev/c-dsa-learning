#include <stdio.h>

void transpose(int r, int c,int a[r][c],int trans[c][r]) {
    int (*aptr)[c]=a;
    int (*transptr)[r]=trans;
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            *(*(transptr+j)+i)=*(*(aptr+i)+j);
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
    int trans[c][r];
    printf("Enter matrix elements:\n");
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The transposed matrix is:\n");
    transpose(r,c,a,trans);
     for(int i=0;i<c;i++) {
        for(int j=0;j<r;j++) {
            printf("%d ",trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}