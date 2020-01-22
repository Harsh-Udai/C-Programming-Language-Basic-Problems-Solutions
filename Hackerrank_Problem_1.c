/*
Now, The first and introduction problem.
To write Hello world with user input.
We are using C language, in this language we use a string array of character datatype to,
initialize he string.

Important things/learning Outcome:
    1. We dont use scanf, Because scanf only take input for continuous string without break.(It will take upto whitespace).
    2. This problem overcome by (gets- method) this will take input with whitespace.
*/


#include <stdio.h>
int main() 
{
	
    char s[100];
    gets(s);
    char s1[100]="Hello, World!";
    printf("%s",s1);
    printf("\n%s",s);

    return 0;
}

// Thank you By:- Harsh Udai.