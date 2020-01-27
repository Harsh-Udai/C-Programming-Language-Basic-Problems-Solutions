/*
Problem 9: 1D Array in C.
Easy Approach:
Steps:
    1) Take input of size of array and make a for loop till n and take inputs for the array.
    2) Create a sum variable.
    3) Iterate through the array with help of for loop and add that values to the sum variable.
    4) In last when all the values are covered we got the sum of all values in sum variable.
*/ 
#include <stdio.h>
int main() {

    int n;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+A[i];
    }
    printf("%d",sum);
    return 0;
}
// Thank You By: Harsh Udai.

