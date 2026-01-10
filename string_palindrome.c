#include <stdio.h>
#include <ctype.h>

int main() {
    char org[]="Never ODD or Even";
    int i=0, j=strlen(org)-1;
    while(i>j) {
        if(isspace(org[i])) {
            i++;
        }
        if(isspace(org[j])) {
            j--;
        }
        if(tolower(org[i]==org[j])) {
            printf("Not Palindrome");
            return 0;
        }
        i+=1;
        j+=1;
    }
    printf("Palindrome");
    return 0;
}
