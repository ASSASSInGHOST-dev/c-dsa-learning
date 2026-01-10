#include <stdio.h>

int main() {
    char src[]="Copying String without using Strcopy()";
    char dest[sizeof(src)]="";
    int count=0;
    while(src[count]!='\0') {
        dest[count]=src[count];
        count++;
    }
    dest[count]='\0';
    printf("Copied string is %s",dest);
    return 0;
}
