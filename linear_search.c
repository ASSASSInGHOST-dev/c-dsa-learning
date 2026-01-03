#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements in the array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements\n");
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    printf("Enter the number to be searched\n");
    int flag=0,num;
    scanf("%d",&num);
    for(int i=0;i<n;i++) {
        if(a[i]==num) {
            printf("%d found! It is the %dth element\n",num,i+1);
            flag+=1;
        }
    }
    if(flag==0)
    printf("%d not found!",num);
    else
    printf("%d found %d times",num,flag);
    return 0;
}