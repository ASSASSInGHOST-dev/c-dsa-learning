#include <stdio.h>
#include <stdlib.h>

void modify(int **arr,int rows,int columns) {
    for(int i=0;i<rows;i++) {
        for(int j=0;j<columns;j++) {
            arr[i][j]+=10;
        }
    }
}

int main() {
    int **a;
    int r,c;
    int check=0;
    printf("Enter number of rows\n");
    scanf("%d",&r);
    printf("Enter number of columns\n");
    scanf("%d",&c);
    a=(int**) calloc(r,sizeof(int*));
    if(a!=NULL) {
        for(int i=0;i<r;i++) {
            a[i]=(int*) calloc(c,sizeof(int));
            if(a[i]==NULL) {
                printf("Memory allocation unsuccessful\n");
                while(check>0) {
                    free(a[check-1]);
                    check--;
                }
                return 0;
            }
            check++;
        }
    }
    else {
        printf("Memory allocation unsuccessful\n");
        return 0;
    }
    printf("Enter matrix elements\n");
    for(int j=0;j<r;j++) {
        for(int k=0;k<c;k++) {
            scanf("%d",&a[j][k]);
        }
    }
    printf("The modified matrix is:\n");
    modify(a,r,c);
    for(int j=0;j<r;j++) {
        for(int k=0;k<c;k++) {
            printf("%d ",*(*(a+j)+k));
        }
        printf("\n");
    }
    for(int i=0;i<r;i++) {
        free(a[i]);
    }
    free(a);
    return 0;
}