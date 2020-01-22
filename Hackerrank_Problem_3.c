/*
Problem 3: Funcions in C.
Easy Approach:
Steps:
    0. Include stdio.h for standard input and output.
    1. First create main function for taking inputs for 4 integers.
    2. Create max_of_four function.
        a) With the help of if, else if and else statements we check for individual integers
            i.e who is bigger one.
        b) We have 4 integers that is why we made 4 if and else if conditions.
        c) For checking more than one coditions in if statements we use (&&) opertators.
        d) With printf statements we display the respective results.

*/
#include <stdio.h>
void max_of_four(int n, int m, int o, int p){
    if(n>m && n>o && n>p){
        printf("%d",n);
    }
    else if(m>n && m>o && m>p){
        printf("%d",m);
    }
    else if(o>n && o>m && o>p){
        printf("%d",o);
    }
    else{
        printf("%d",p);
    }

}
int main(){
    int n,m,o,p;
    scanf("%d %d %d %d",&n,&m,&o,&p);
    
    max_of_four(n,m,o,p);

    return 0;
}

// Thank you By:- Harsh Udai.