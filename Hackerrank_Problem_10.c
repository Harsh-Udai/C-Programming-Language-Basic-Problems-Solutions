/*
Problem 10: Array Reversal.
Easy Approach:
Steps:
    1) Take input of size of array and with the help of for loop take input of values for array.
    2) Now, apply for loop in reverse way.
        make loop from ((length of array -1) to 0).
    3) You got your result.
*/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    for(int i=n-1;i>=0;i--){
        printf("%d ",A[i]);
    }
    return 0;
}
// Thank You By: Harsh Udai.

