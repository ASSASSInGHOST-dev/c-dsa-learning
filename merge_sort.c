#include <stdio.h>

void merge(int n, int m, int a[n], int b[m], int c[n+m]) {
    int i = 0, j = 0, k = 0;
    while(i<n && j<m) {
        if(a[i]<=b[j]) {
            c[k]=a[i];
            i++;
        } 
        else {
            c[k]=b[j];
            j++;
        }
        k++;
    }
    while(i<n) {
        c[k++]=a[i++];
    }
    while(j<m) {
        c[k++]=b[j++];
    }
}

void sort(int n,int a[n]) { 
    int temp; for(int pass=0;pass<n-1;pass++) { 
        int smallindx=pass; 
        for(int j=pass+1;j<n;j++) { 
            if(a[smallindx]>a[j]) 
            smallindx=j; 
        } 
        temp=a[pass]; 
        a[pass]=a[smallindx]; 
        a[smallindx]=temp; 
    } 
}

int main() {
    int n, m;
    printf("Enter number of elements in the first array\n");
    scanf("%d",&n);
    printf("Enter number of elements in the second array\n");
    scanf("%d",&m);
    int a[n];
    int b[m];
    int c[m+n];
    printf("Enter elements of the first array\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter elements of the second array\n");
    for(int j=0;j<m;j++)
    scanf("%d",&b[j]);
    sort(n,a);
    sort(m,b);
    merge(n,m,a,b,c);
    printf("The Sorted and merged array is\n");
    for(int k=0;k<(m+n);k++)
    printf("%d ",c[k]);
    return 0;
}