/*
Problem 2: Playing with Characters.
Easy Approach:
Steps:
    0. We initialize our code with stdio.h header file to make code with standard input and output.
    1. Make string array of character datatype.
    2. Because we take input of string including Whitespace we use gets(*method).
    3. In last we simply print the Strings.
    

*/
#include <stdio.h>

int main() 
{

    char s[100];
    char s1[100];
    char s2[100];
    gets(s);
    gets(s1);
    gets(s2);
    printf("%s",s);
    printf("\n%s",s1);
    printf("\n%s",s2); 
    return 0;
}

// Thank you By:- Harsh Udai.
