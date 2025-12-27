#include <stdio.h>

void sum(int r,int c,int a[r][c],int b[r][c]) {
    int s[r][c];
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            s[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("The sum of the matrices are:\n");  
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            printf("%d ",s[i][j]);
        }
        printf("\n");
      }  
}

void subtract(int r,int c,int a[r][c],int b[r][c]) {
    int s[r][c];
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            s[i][j]=a[i][j]-b[i][j];
        }
    }
    printf("\nThe difference of the matrices are:\n");  
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            printf("%d" ,s[i][j]);
        }
        printf("\n");
      }  
}

int sum_elements(int r,int c,int a[r][c]) {
    int s=0;
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            s=s+a[i][j];
        }
    }
    return s;
}

void main() {
    int r,c;
    printf("\n Enter the number of rows and columns\n");
    scanf("%d",&r);
    scanf("%d",&c);
    printf("Enter the first array\n");
    int a[r][c],b[r][c];
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the second array\n");
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            scanf("%d",&b[i][j]);
        }
    }
    sum(r,c,a,b);
    subtract(r,c,a,b);
    printf("\nWhich array do u want the sum of elements to be done?\n");
    int op;
    scanf("%d",&op);
    switch (op)
    {
    case 1:
        printf("The sum of the elements of the first array is %d\n",sum_elements(r,c,a));
        break;
    case 2:
        printf("The sum of the elements of the second array is %d\n",sum_elements(r,c,b));
        break;
    default:
        printf("Not a valid option");
        break;
    }
    return 0;
}