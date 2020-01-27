/*
Problem 6: Conditional Statement in C.
Easy Approach:
Steps:
    1) Take Standard input of integer value.
    2) With the help of if-elif & else statement we check upto 9.
    3) later on are greater than 9.

*/
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n==1){printf("%s","one");}
    else if(n==2){printf("%s","two");}
    else if(n==3){printf("%s","three");}
    else if(n==4){printf("%s","four");}
    else if(n==5){printf("%s","five");}
    else if(n==6){printf("%s","six");}
    else if(n==7){printf("%s","seven");}
    else if(n==8){printf("%s","eight");}
    else if(n==9){printf("%s","nine");}
    else{printf("%s","Greater than 9");}
    
    return 0;
}
// Thank You By: Harsh Udai.
