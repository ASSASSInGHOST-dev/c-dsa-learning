#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int *ptr2;
    int n;
    printf("Enter array size\n");
    scanf("%d",&n);
    ptr=(int*) malloc(n*sizeof(int));
    ptr2=(int*) calloc(n,sizeof(int));
    if(ptr!=NULL && ptr2!= NULL) {
        printf("Memory allocation successful\n");
        for(int i=0;i<n;i++) {
        printf("The %dth element of the array is %d\n",i,ptr[i]);
        printf("The %dth element of the array is %d\n",i,ptr2[i]);
    }
    }
    else
    printf("Memory allocation unsuccessful");
    free(ptr);
    free(ptr2);
    return 0;
}