/*
Problem 12: Digit Frequency.
Medium Level Problem.
Steps:
    1) We take the input into the character array because input contains character and integers and according 
       to question we have to count the integer values which ranges from 0-9.
    2) Now take an array named as count with all the values upto index 9 as 0.
    3) The length of count array is 10 because we have to count the values for 0-9.
    4) Now traverse through the char array and chech for integer values with the help of if-else statements.
    5) WHile iterating if we see 0 we increase the the values of zero index in count array.
    6) this will check for all values upto 9.
    7) at every step it will increases the values of count array.
    8) In the last we have an array which contains the count of every integer from given input.
    9) That's It!.
*/

#include <stdio.h>
#include <string.h>

int main(){
    char s[1000];
    scanf("%s",&s);
    int count[10];
    for(int i=0;i<10;i++){
        count[i]=0;
    }
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='0'){count[0]++;}
        else if(s[i]=='1'){count[1]++;}
        else if(s[i]=='2'){count[2]++;}
        else if(s[i]=='3'){count[3]++;}
        else if(s[i]=='4'){count[4]++;}
        else if(s[i]=='5'){count[5]++;}
        else if(s[i]=='6'){count[6]++;}
        else if(s[i]=='7'){count[7]++;}
        else if(s[i]=='8'){count[8]++;}
        else if(s[i]=='9'){count[9]++;}
    }
    for(int i=0;i<10;i++){
        printf("%d ",count[i]);
    }
    return 0;
}
// Thank You By: Harsh Udai.