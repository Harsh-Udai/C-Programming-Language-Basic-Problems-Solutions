/*
Problem 8: Sum of Digits of a Five Digit Number.
Easy Approach:
Steps:
    1) Take input of five digit number.
    2) Now take a sum variable of int type.
    3) The main logic is that we take remainder every time.
        eg- 1234%10 will give 4.
            next step is to divide that number by 10 to release last digit from number
            then repeat the process until it become 0.
    4) we do (sum=sum+a)
       here a is remainder every time, and we have to find the sum every time so we add the remainder every time in 
       sum variable.
*/
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    while(n>0){
        int a=n%10;
        sum=sum+a;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}
// Thank You By: Harsh Udai.
