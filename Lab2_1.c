#include <stdio.h>
#include <string.h>

void reverse(char str1[] , char str2[]);

int main() {
    char text[50] = "I Love You" ;
    char out[50] ;
    reverse(text , out);
}//end function main

void reverse(char str1[] , char str2[]) {
    int i , len;
    len=strlen(str1);
    for (i = 0; i < len; i++){
        str2[i] = str1[len-1-i];
    }
    str2[len] = '\0';

    printf("%s\n", str1);
    printf("%s\n", str2);
}//end function reverse
