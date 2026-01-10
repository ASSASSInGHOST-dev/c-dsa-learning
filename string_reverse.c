#include <stdio.h>

int main() {
    char org[]="Reversing a string using loops";
    char rev[sizeof(org)];
    int count1=0, count2=sizeof(org)-2;
    rev[count2+1]='\0';
    while(org[count1]!='\0') {
        rev[count2]=org[count1];
        count1++;
        count2-=1;
    }
    printf("The reverse string is %s",rev);
    return 0;
}