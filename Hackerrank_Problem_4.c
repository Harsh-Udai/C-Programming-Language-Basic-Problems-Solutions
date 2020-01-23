/*
Problem 4: Sum and Difference of two numbers.
Easy Approach:
Steps:
    1) Initalize two variable of int type and two of float type.
    2) Directly with the use of scanf take input of two integer as well as the float type.
       We can take input of two number with space separted/ continuous way as shown.
    3) In last directly show the result of add and subtract in prinf statement.
    4) But in case of float we have to make our output upto 1 decimal after decimal, so we use (1.f),
       which represent float number upto 1 decimal, but if we want upto two decimal we set it to (2.f).

*/ 
#include <stdio.h>
int main()
{
	int a;
    int b;
    float c;
    float d;
    
    scanf("%d %d",&a ,&b);
    scanf("%f %f",&c, &d);
    printf("%d %d",(a+b),(a-b));
    printf("\n%.1f %.1f",(c+d),(c-d));
    
    return 0;
}

//Thank you By:- Harsh Udai
