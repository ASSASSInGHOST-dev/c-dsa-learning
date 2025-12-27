#include <stdio.h>

void add(int r,int c,int a[r][c],int b[r][c],int s[r][c]) {
    int (*ptr1)[c]=a;
    int (*ptr2)[c]=b;
    int (*sum)[c]=s;
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            *(*(sum+i)+j)=*(*(ptr1+i)+j)+*(*(ptr2+i)+j);
        }
    }
}

void input(int r,int c,int a[r][c],int b[r][c]) {
    int (*a1)[c]=a;
    int (*b1)[c]=b;
    printf("Enter elements of first array:\n");
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            scanf("%d",*(a1+i)+j);
        }
    }
    printf("Enter elements of second array:\n");
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            scanf("%d",*(b1+i)+j);
        }
    }
}

int main() {
    int r1,c1,r2,c2;
    printf("Enter number of rows in first Matrix:\n");
    scanf("%d",&r1);
    printf("Enter number of columns in first Matrix:\n");
    scanf("%d",&c1);
    printf("Enter number of rows in second Matrix:\n");
    scanf("%d",&r2);
    printf("Enter number of columns in second Matrix:\n");
    scanf("%d",&c2);
    if(r1!=r2 || c1!=c2)
    printf("Matrix addition not possible\n");
    else {
        int sum[r1][c1],a[r1][c1],b[r1][c1];
        input(r1,c1,a,b);
        add(r1,c1,a,b,sum);
        printf("The sum of the matrices are:\n");
    for(int i=0;i<r1;i++) {
        for(int j=0;j<c1;j++) {
            printf("%d ",*(*(sum+i)+j));
        }
        printf("\n");
    }        
    }
    return 0;
}