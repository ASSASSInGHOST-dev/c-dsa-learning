#include <stdio.h>
#include <stdlib.h>

void assign(int *arr, int r, int c) {
    printf("Enter array elements\n");
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            scanf("%d",&arr[i*c+j]);
        }
    }
}

int main() {
    int *a;
    int rows,columns;
    printf("Enter number of rows\n");
    scanf("%d",&rows);
    printf("Enter number of columns\n");
    scanf("%d",&columns);
    a=(int*) malloc(rows*columns*sizeof(int));
    if(a!=NULL) {
        assign(a,rows,columns);
        for(int i=0;i<rows;i++) {
            for(int j=0;j<columns;j++) {
                printf("%d ",a[i*columns+j]);
            }
            printf("\n");
        }
    }
    else {
        printf("Memory allocation unsuccessful\n");
        return 0;
    }
    free(a);
    return 0;
}