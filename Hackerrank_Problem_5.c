/*
Problem 5: Pointers in C.
Easy Approach:
Steps:
    1) Initialize (c) of int type and just add two integer values which were passes.
    2) As we see in the main method we have two pointers (*pa & *pb) which holds the address of (a & b).
    3) we pass (pa & pb) to update which are respective adresses of (a & b).
    4) But we see in update function declaration above main method we use (*a and *b) which normally holds the int values of,
       a and b.
    5) So we directly store a+b and a-b;
    6) After that we assign the actual *a and *b pointers to the c and d.(added value and subtrat value).
*/
#include <stdio.h>
void update(int *a,int *b) {
    int c=*a+*b;
    int d;
    if(*a>*b){
        d=*a-*b;
    }
    else{
        d=*b-*a;
    } 
    *a=c;
    *b=d;
}
int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);
    return 0;
}

// Thank You By:- Harsh Udai

