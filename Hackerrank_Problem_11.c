/*
Problem 11: Printing Tokens.
Easy Approach:
Steps:
    1) Initially we include string library to get some benfits of it.
    2) Declare dynamic memory for character array, because input can be of any length that is why
       dynamic memory id used.
       eg- malloc(1024 * sizeof(char));
           here 1024 is byte allocated.
           sizeof - function for getting the size of char array.
    3) Now we iterate over the char array.
    4) But the twist is that we have to print it on new line after whitespace.
    5) So, with the help of if-else statement we check for whitespace if there we give line break,
       otherwise we simply print the string for array.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    for(int i=0;i<strlen(s);i++){
        if(s[i]==' '){
            printf("\n");
        }
        else{
        printf("%c",s[i]);
        }
    }
    return 0;
}
//Thank You By: Harsh Udai.
