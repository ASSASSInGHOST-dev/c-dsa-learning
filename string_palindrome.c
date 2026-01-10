#include <stdio.h>
#include <ctype.h>

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
    for (int i= 0;org[i]!='\0';i++) {
        if (tolower(org[i])!=tolower(rev[i])) {
            printf("Not Palindrome\n");
            return 0;
        }
    }
    printf("Palindrome\n");
    return 0;
}