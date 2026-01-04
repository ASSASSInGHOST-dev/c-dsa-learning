#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void transpose(int *arr,int *temp,int r,int c) {
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            temp[j*r+i]=arr[i*c+j];
        }
    }
}

bool check(int *a1,int *temp) {
    if(a1!=NULL && temp!=NULL)
    return true;
    else
    return false;    
}

int main() {
    int *a;
    int *temp;
    int rows,columns;
    printf("Enter number of rows\n");
    scanf("%d",&rows);
    printf("Enter number of columns\n");
    scanf("%d",&columns);
    a=(int*) malloc(rows*columns*sizeof(int));
    temp=(int *) malloc(columns*rows*sizeof(int));
    if(check(a,temp)==true) {
        printf("Enter matrix elements\n");
        for(int i=0;i<rows;i++) {
            for(int j=0;j<columns;j++) {
                scanf("%d",&a[i*columns+j]);
            }
        }
        transpose(a,temp,rows,columns);
        printf("Transposed matrix is:\n");
        for(int i=0;i<columns;i++) {
            for(int j=0;j<rows;j++) {
                printf("%d ",temp[i*rows+j]);
            }
            printf("\n");
        }
    }
    else
    printf("Memory allocation unsuccessful");
    free(a);
    free(temp);
    return 0;
}