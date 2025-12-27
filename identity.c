#include <stdio.h>
#include <stdbool.h>

int identity(int r,int c,int a[r][c]) {
    bool check=true;
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            if(i==j) {
                if(a[i][j]!=1){
                    check=false;
                    break;
                }
            }
            else if(a[i][j]!=0) {
                check=false;
                break;
            }
            if(check==false)
            break;
        }
    }
    if(check==true)
    return 1;
    else
    return 0;
}

int main() {
    int r,c;
    printf("Enter the number of rows and columns\n");
    scanf("%d",&r);
    scanf("%d",&c);
    int a[r][c];
    printf("Enter array elements\n");
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            scanf("%d",&a[i][j]);
        }
    }
    if(r!=c)
    printf("Not a square matrix hence not an identity matrix");
    else if(identity(r,c,a)==1)
    printf("Given matrix is an identity matrix");
    else
    printf("Not an identity matrix");
    return 0;
}