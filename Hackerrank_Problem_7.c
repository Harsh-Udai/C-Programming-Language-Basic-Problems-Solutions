/*
Problem 7: For loop in C.
Easy Approach:
Steps:
    1) Take two integer inputs and apply for loop through the values.
        eg- input of a and b.
            make loop for (a to b) in which b is also included(Hint. use <= for b).
    2) With the help of if-else statements check values upto 9.
    3) later on check for even(i%2==0), otherwise odd respectively.
    4) I type ("\n ") to give line break after execution.  
*/
#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d",&a, &b);
    for(int i=a;i<=b;i++){
        if(i==1){printf("%s","one\n");}
        else if(i==2){printf("%s","two\n");}
        else if(i==3){printf("%s","three\n");}
        else if(i==4){printf("%s","four\n");}
        else if(i==5){printf("%s","five\n");}
        else if(i==6){printf("%s","six\n");}
        else if(i==7){printf("%s","seven\n");}
        else if(i==8){printf("%s","eight\n");}
        else if(i==9){printf("%s","nine\n");}
        else if(i>9 && i%2==0){printf("%s","even\n");}
        else{
            printf("%s","odd\n");
        }
    }
    return 0;
}
// Thank You By: Harsh Udai.
